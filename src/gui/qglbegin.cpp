#include "qglbegin.h"

QGLBegin::QGLBegin(QWidget* parent) : QOpenGLWidget(parent) {
  xrot = yrot = zrot = xmov = ymov = zmov = xscale = yscale = zscale = 0.0;
  central = false;
  parallel = true;
  type_changed = true;
  circle_projection = true;
  square_projection = false;
  none_projection = false;
  projection_changed = true;
  bool jpeg = false;
  bool bmp = false;
}

void QGLBegin::initializeGL() {
  glClearColor(0.0, 0.0, 0.0, 0.0);
  glEnable(GL_LIGHT0);
  glEnable(GL_DEPTH_TEST);
  polygon_view.color = QColor(qRgb(255, 255, 255));
  vertex_view.color = QColor(qRgb(255, 255, 255));
  polygon_view.width = 1.0f;
  vertex_view.width = 1.0f;
}

void QGLBegin::paintGL() {
  Controller* obj = Controller::getObj();
  glClearColor(back_color.redF(), back_color.greenF(), back_color.blueF(), 0);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glLoadIdentity();
  glScalef(1.0 + xscale, 1.0 + yscale, 1.0 + zscale);
  glTranslatef(0.0 + xmov, 0.0 + ymov, -7.0 + zmov);
  glRotatef(xrot, 1.0, 0.0, 0.0);
  glRotatef(yrot, 0.0, 1.0, 0.0);
  glRotatef(zrot, 0.0, 0.0, 1.0);

  if (controller && obj) {
    for (const auto& pol : obj->polygon) {
      glColor3f(polygon_view.color.redF(), polygon_view.color.greenF(),
                polygon_view.color.blueF());
      glLineWidth(polygon_view.width);
      glLineStipple(1, 0x00F0);
      if (polygon_view.dotted) {
        glEnable(GL_LINE_STIPPLE);
      } else if (polygon_view.solid) {
        glDisable(GL_LINE_STIPPLE);
      }

      glBegin(GL_LINE_LOOP);
      for (std::size_t p : pol.vertices_indices) {
        glVertex3d(obj->vertex[(int)p - 1].x, obj->vertex[(int)p - 1].y,
                   obj->vertex[(int)p - 1].z);
      }

      glEnd();
      if (projection_changed) {
        if (circle_projection) {
          glEnable(GL_POINT_SMOOTH);
        } else if (square_projection) {
          glDisable(GL_POINT_SMOOTH);
        }
        projection_changed = false;
      }
      if (!none_projection) {
        glPointSize(vertex_view.width);
        glBegin(GL_POINTS);
        glColor3f(vertex_view.color.redF(), vertex_view.color.greenF(),
                  vertex_view.color.blueF());
        for (std::size_t p : pol.vertices_indices) {
          GLfloat vertex[3] = {obj->vertex[(int)p - 1].x,
                               obj->vertex[(int)p - 1].y,
                               obj->vertex[(int)p - 1].z};
          glVertex3fv(vertex);
        }
        glEnd();
      }
    }
  }
  if (type_changed) {
    type_changed = false;
    resizeGL(950, 800);
  }
}

void QGLBegin::resizeGL(int width, int height) {
  int side = qMax(width, height);

  glViewport((width - side) / 2, (height - side) / 2, side, side);
  GLfloat fov = 60.0 * M_PI / 180;
  GLfloat near = 1 / tan(fov / 2);

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  if (central) {
    glOrtho(-2., 2., -2., 2., -10, 10.);

  } else {
    glFrustum(-0.5, 0.5, -0.5, 0.5, near, 100.);
    glTranslated(0, 0, -near * 3);
  }
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  paintGL();
}

void QGLBegin::setRotation(float x, float y, float z) {
  xrot = x;
  yrot = y;
  zrot = z;
  update();
}

void QGLBegin::setMovement(char c, float val) {
  if (c == 'x') {
    xmov = val;
  } else if (c == 'y') {
    ymov = val;
  } else if (c == 'z') {
    zmov = val;
  }
  update();
}

void QGLBegin::setScale(char c, float val) {
  if (c == 'x') {
    xscale = val;
  } else if (c == 'y') {
    yscale = val;
  } else if (c == 'z') {
    zscale = val;
  }

  update();
}
