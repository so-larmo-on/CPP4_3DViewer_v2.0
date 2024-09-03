/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

#include "../back/s21_controller.h"
#include "qglbegin.h"
using namespace s21;
QT_BEGIN_NAMESPACE

class Ui_MainWindow {
 public:
  QAction *actioncube_obj;
  QAction *actionseat_obj;
  QAction *actionlighter_obj;
  QAction *actiondeer_obj;
  QAction *actioncentral;
  QAction *actionparallel;
  QAction *actioncolor;
  QAction *actionwidth;
  QAction *actiondotted;
  QAction *actionsolid;
  QAction *actioncolor_2;
  QAction *actionsize;
  QAction *actionnone;
  QAction *actioncircle;
  QAction *actionsquare;
  QAction *actionback_color;
  QAction *actionbmp;
  QAction *actionjpeg;
  QAction *actiongo;
  QWidget *centralwidget;
  QGLBegin *openGLWidget;
  QWidget *verticalLayoutWidget;
  QVBoxLayout *verticalLayout;
  QLabel *w_label_p;
  QLabel *w_label_v;
  QLabel *r_label_x;
  QLabel *r_label_y;
  QLabel *r_label_z;
  QWidget *verticalLayoutWidget_2;
  QVBoxLayout *verticalLayout_2;
  QSlider *w_slider_p;
  QSlider *w_slider_v;
  QSlider *r_slider_x;
  QSlider *r_slider_y;
  QSlider *r_slider_z;
  QWidget *verticalLayoutWidget_3;
  QVBoxLayout *verticalLayout_3;
  QLabel *m_label_x;
  QLabel *m_label_y;
  QLabel *m_label_z;
  QWidget *verticalLayoutWidget_4;
  QVBoxLayout *verticalLayout_4;
  QSlider *m_slider_x;
  QSlider *m_slider_y;
  QSlider *m_slider_z;
  QWidget *verticalLayoutWidget_5;
  QVBoxLayout *verticalLayout_5;
  QLabel *s_label_x;
  QLabel *s_label_y;
  QLabel *s_label_z;
  QWidget *verticalLayoutWidget_6;
  QVBoxLayout *verticalLayout_6;
  QSlider *s_slider_x;
  QSlider *s_slider_y;
  QSlider *s_slider_z;
  QWidget *verticalLayoutWidget_7;
  QVBoxLayout *verticalLayout_7;
  QLabel *file_label;
  QLabel *count_v_label;
  QLabel *count_p_label;
  QMenuBar *menubar;
  QMenu *menuFile;
  QMenu *menuType;
  QMenu *menuPolygon;
  QMenu *menuVertex;
  QMenu *menuDisplay;
  QMenu *menuBackground;
  QMenu *menuSave;
  QMenu *menuScreencast;
  QStatusBar *statusbar;

  void setupUi(QMainWindow *MainWindow) {
    if (MainWindow->objectName().isEmpty())
      MainWindow->setObjectName("MainWindow");
    MainWindow->resize(800, 600);
    actioncube_obj = new QAction(MainWindow);
    actioncube_obj->setObjectName("actioncube_obj");
    actioncube_obj->setCheckable(true);
    actionseat_obj = new QAction(MainWindow);
    actionseat_obj->setObjectName("actionseat_obj");
    actionseat_obj->setCheckable(true);
    actionlighter_obj = new QAction(MainWindow);
    actionlighter_obj->setObjectName("actionlighter_obj");
    actionlighter_obj->setCheckable(true);
    actiondeer_obj = new QAction(MainWindow);
    actiondeer_obj->setObjectName("actiondeer_obj");
    actiondeer_obj->setCheckable(true);
    actioncentral = new QAction(MainWindow);
    actioncentral->setObjectName("actioncentral");
    actioncentral->setCheckable(true);
    actionparallel = new QAction(MainWindow);
    actionparallel->setObjectName("actionparallel");
    actionparallel->setCheckable(true);
    actioncolor = new QAction(MainWindow);
    actioncolor->setObjectName("actioncolor");
    actioncolor->setCheckable(true);
    actionwidth = new QAction(MainWindow);
    actionwidth->setObjectName("actionwidth");
    actionwidth->setCheckable(true);
    actiondotted = new QAction(MainWindow);
    actiondotted->setObjectName("actiondotted");
    actiondotted->setCheckable(true);
    actionsolid = new QAction(MainWindow);
    actionsolid->setObjectName("actionsolid");
    actionsolid->setCheckable(true);
    actioncolor_2 = new QAction(MainWindow);
    actioncolor_2->setObjectName("actioncolor_2");
    actioncolor_2->setCheckable(true);
    actionsize = new QAction(MainWindow);
    actionsize->setObjectName("actionsize");
    actionsize->setCheckable(true);
    actionnone = new QAction(MainWindow);
    actionnone->setObjectName("actionnone");
    actionnone->setCheckable(true);
    actioncircle = new QAction(MainWindow);
    actioncircle->setObjectName("actioncircle");
    actioncircle->setCheckable(true);
    actionsquare = new QAction(MainWindow);
    actionsquare->setObjectName("actionsquare");
    actionsquare->setCheckable(true);
    actionback_color = new QAction(MainWindow);
    actionback_color->setObjectName("actionback_color");
    actionback_color->setCheckable(true);
    actionbmp = new QAction(MainWindow);
    actionbmp->setObjectName("actionbmp");
    actionbmp->setCheckable(true);
    actionjpeg = new QAction(MainWindow);
    actionjpeg->setObjectName("actionjpeg");
    actionjpeg->setCheckable(true);
    actiongo = new QAction(MainWindow);
    actiongo->setObjectName("actiongo");
    actiongo->setCheckable(true);
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName("centralwidget");
    openGLWidget = new QGLBegin(centralwidget);
    openGLWidget->setObjectName("openGLWidget");
    openGLWidget->setGeometry(QRect(289, 9, 481, 431));
    verticalLayoutWidget = new QWidget(centralwidget);
    verticalLayoutWidget->setObjectName("verticalLayoutWidget");
    verticalLayoutWidget->setGeometry(QRect(10, 150, 87, 181));
    verticalLayout = new QVBoxLayout(verticalLayoutWidget);
    verticalLayout->setSpacing(6);
    verticalLayout->setContentsMargins(11, 11, 11, 11);
    verticalLayout->setObjectName("verticalLayout");
    verticalLayout->setContentsMargins(0, 0, 0, 0);
    w_label_p = new QLabel(verticalLayoutWidget);
    w_label_p->setObjectName("w_label_p");

    verticalLayout->addWidget(w_label_p);

    w_label_v = new QLabel(verticalLayoutWidget);
    w_label_v->setObjectName("w_label_v");

    verticalLayout->addWidget(w_label_v);

    r_label_x = new QLabel(verticalLayoutWidget);
    r_label_x->setObjectName("r_label_x");

    verticalLayout->addWidget(r_label_x);

    r_label_y = new QLabel(verticalLayoutWidget);
    r_label_y->setObjectName("r_label_y");

    verticalLayout->addWidget(r_label_y);

    r_label_z = new QLabel(verticalLayoutWidget);
    r_label_z->setObjectName("r_label_z");

    verticalLayout->addWidget(r_label_z);

    verticalLayoutWidget_2 = new QWidget(centralwidget);
    verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
    verticalLayoutWidget_2->setGeometry(QRect(70, 150, 211, 181));
    verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
    verticalLayout_2->setSpacing(6);
    verticalLayout_2->setContentsMargins(11, 11, 11, 11);
    verticalLayout_2->setObjectName("verticalLayout_2");
    verticalLayout_2->setContentsMargins(0, 0, 0, 0);
    w_slider_p = new QSlider(verticalLayoutWidget_2);
    w_slider_p->setObjectName("w_slider_p");
    w_slider_p->setOrientation(Qt::Horizontal);

    verticalLayout_2->addWidget(w_slider_p);

    w_slider_v = new QSlider(verticalLayoutWidget_2);
    w_slider_v->setObjectName("w_slider_v");
    w_slider_v->setOrientation(Qt::Horizontal);

    verticalLayout_2->addWidget(w_slider_v);

    r_slider_x = new QSlider(verticalLayoutWidget_2);
    r_slider_x->setObjectName("r_slider_x");
    r_slider_x->setOrientation(Qt::Horizontal);

    verticalLayout_2->addWidget(r_slider_x);

    r_slider_y = new QSlider(verticalLayoutWidget_2);
    r_slider_y->setObjectName("r_slider_y");
    r_slider_y->setOrientation(Qt::Horizontal);

    verticalLayout_2->addWidget(r_slider_y);

    r_slider_z = new QSlider(verticalLayoutWidget_2);
    r_slider_z->setObjectName("r_slider_z");
    r_slider_z->setOrientation(Qt::Horizontal);

    verticalLayout_2->addWidget(r_slider_z);

    verticalLayoutWidget_3 = new QWidget(centralwidget);
    verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
    verticalLayoutWidget_3->setGeometry(QRect(10, 340, 61, 101));
    verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
    verticalLayout_3->setSpacing(6);
    verticalLayout_3->setContentsMargins(11, 11, 11, 11);
    verticalLayout_3->setObjectName("verticalLayout_3");
    verticalLayout_3->setContentsMargins(0, 0, 0, 0);
    m_label_x = new QLabel(verticalLayoutWidget_3);
    m_label_x->setObjectName("m_label_x");

    verticalLayout_3->addWidget(m_label_x);

    m_label_y = new QLabel(verticalLayoutWidget_3);
    m_label_y->setObjectName("m_label_y");

    verticalLayout_3->addWidget(m_label_y);

    m_label_z = new QLabel(verticalLayoutWidget_3);
    m_label_z->setObjectName("m_label_z");

    verticalLayout_3->addWidget(m_label_z);

    verticalLayoutWidget_4 = new QWidget(centralwidget);
    verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
    verticalLayoutWidget_4->setGeometry(QRect(70, 340, 211, 101));
    verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
    verticalLayout_4->setSpacing(6);
    verticalLayout_4->setContentsMargins(11, 11, 11, 11);
    verticalLayout_4->setObjectName("verticalLayout_4");
    verticalLayout_4->setContentsMargins(0, 0, 0, 0);
    m_slider_x = new QSlider(verticalLayoutWidget_4);
    m_slider_x->setObjectName("m_slider_x");
    m_slider_x->setOrientation(Qt::Horizontal);

    verticalLayout_4->addWidget(m_slider_x);

    m_slider_y = new QSlider(verticalLayoutWidget_4);
    m_slider_y->setObjectName("m_slider_y");
    m_slider_y->setOrientation(Qt::Horizontal);

    verticalLayout_4->addWidget(m_slider_y);

    m_slider_z = new QSlider(verticalLayoutWidget_4);
    m_slider_z->setObjectName("m_slider_z");
    m_slider_z->setOrientation(Qt::Horizontal);

    verticalLayout_4->addWidget(m_slider_z);

    verticalLayoutWidget_5 = new QWidget(centralwidget);
    verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
    verticalLayoutWidget_5->setGeometry(QRect(10, 450, 61, 101));
    verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
    verticalLayout_5->setSpacing(6);
    verticalLayout_5->setContentsMargins(11, 11, 11, 11);
    verticalLayout_5->setObjectName("verticalLayout_5");
    verticalLayout_5->setContentsMargins(0, 0, 0, 0);
    s_label_x = new QLabel(verticalLayoutWidget_5);
    s_label_x->setObjectName("s_label_x");

    verticalLayout_5->addWidget(s_label_x);

    s_label_y = new QLabel(verticalLayoutWidget_5);
    s_label_y->setObjectName("s_label_y");

    verticalLayout_5->addWidget(s_label_y);

    s_label_z = new QLabel(verticalLayoutWidget_5);
    s_label_z->setObjectName("s_label_z");

    verticalLayout_5->addWidget(s_label_z);

    verticalLayoutWidget_6 = new QWidget(centralwidget);
    verticalLayoutWidget_6->setObjectName("verticalLayoutWidget_6");
    verticalLayoutWidget_6->setGeometry(QRect(70, 450, 541, 101));
    verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
    verticalLayout_6->setSpacing(6);
    verticalLayout_6->setContentsMargins(11, 11, 11, 11);
    verticalLayout_6->setObjectName("verticalLayout_6");
    verticalLayout_6->setContentsMargins(0, 0, 0, 0);
    s_slider_x = new QSlider(verticalLayoutWidget_6);
    s_slider_x->setObjectName("s_slider_x");
    s_slider_x->setOrientation(Qt::Horizontal);

    verticalLayout_6->addWidget(s_slider_x);

    s_slider_y = new QSlider(verticalLayoutWidget_6);
    s_slider_y->setObjectName("s_slider_y");
    s_slider_y->setOrientation(Qt::Horizontal);

    verticalLayout_6->addWidget(s_slider_y);

    s_slider_z = new QSlider(verticalLayoutWidget_6);
    s_slider_z->setObjectName("s_slider_z");
    s_slider_z->setOrientation(Qt::Horizontal);

    verticalLayout_6->addWidget(s_slider_z);

    verticalLayoutWidget_7 = new QWidget(centralwidget);
    verticalLayoutWidget_7->setObjectName("verticalLayoutWidget_7");
    verticalLayoutWidget_7->setGeometry(QRect(9, 9, 271, 141));
    verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_7);
    verticalLayout_7->setSpacing(6);
    verticalLayout_7->setContentsMargins(11, 11, 11, 11);
    verticalLayout_7->setObjectName("verticalLayout_7");
    verticalLayout_7->setContentsMargins(0, 0, 0, 0);
    file_label = new QLabel(verticalLayoutWidget_7);
    file_label->setObjectName("file_label");

    verticalLayout_7->addWidget(file_label);

    count_v_label = new QLabel(verticalLayoutWidget_7);
    count_v_label->setObjectName("count_v_label");

    verticalLayout_7->addWidget(count_v_label);

    count_p_label = new QLabel(verticalLayoutWidget_7);
    count_p_label->setObjectName("count_p_label");

    verticalLayout_7->addWidget(count_p_label);

    MainWindow->setCentralWidget(centralwidget);
    menubar = new QMenuBar(MainWindow);
    menubar->setObjectName("menubar");
    menubar->setGeometry(QRect(0, 0, 800, 29));
    menuFile = new QMenu(menubar);
    menuFile->setObjectName("menuFile");
    menuType = new QMenu(menubar);
    menuType->setObjectName("menuType");
    menuPolygon = new QMenu(menubar);
    menuPolygon->setObjectName("menuPolygon");
    menuVertex = new QMenu(menubar);
    menuVertex->setObjectName("menuVertex");
    menuDisplay = new QMenu(menubar);
    menuDisplay->setObjectName("menuDisplay");
    menuBackground = new QMenu(menubar);
    menuBackground->setObjectName("menuBackground");
    menuSave = new QMenu(menubar);
    menuSave->setObjectName("menuSave");
    menuScreencast = new QMenu(menubar);
    menuScreencast->setObjectName("menuScreencast");
    MainWindow->setMenuBar(menubar);
    statusbar = new QStatusBar(MainWindow);
    statusbar->setObjectName("statusbar");
    MainWindow->setStatusBar(statusbar);

    menubar->addAction(menuFile->menuAction());
    menubar->addAction(menuType->menuAction());
    menubar->addAction(menuPolygon->menuAction());
    menubar->addAction(menuVertex->menuAction());
    menubar->addAction(menuDisplay->menuAction());
    menubar->addAction(menuBackground->menuAction());
    menubar->addAction(menuSave->menuAction());
    menubar->addAction(menuScreencast->menuAction());
    menuFile->addAction(actioncube_obj);
    menuFile->addAction(actionseat_obj);
    menuFile->addAction(actionlighter_obj);
    menuFile->addAction(actiondeer_obj);
    menuType->addAction(actioncentral);
    menuType->addAction(actionparallel);
    menuPolygon->addAction(actioncolor);
    menuPolygon->addAction(actiondotted);
    menuPolygon->addAction(actionsolid);
    menuVertex->addAction(actioncolor_2);
    menuDisplay->addAction(actionnone);
    menuDisplay->addAction(actioncircle);
    menuDisplay->addAction(actionsquare);
    menuBackground->addAction(actionback_color);
    menuSave->addAction(actionbmp);
    menuSave->addAction(actionjpeg);
    menuScreencast->addAction(actiongo);

    retranslateUi(MainWindow);

    QMetaObject::connectSlotsByName(MainWindow);
  }  // setupUi

  void retranslateUi(QMainWindow *MainWindow) {
    MainWindow->setWindowTitle(
        QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
    actioncube_obj->setText(
        QCoreApplication::translate("MainWindow", "cube.obj", nullptr));
    actionseat_obj->setText(
        QCoreApplication::translate("MainWindow", "seat.obj", nullptr));
    actionlighter_obj->setText(
        QCoreApplication::translate("MainWindow", "lighter.obj", nullptr));
    actiondeer_obj->setText(
        QCoreApplication::translate("MainWindow", "deer.obj", nullptr));
    actioncentral->setText(
        QCoreApplication::translate("MainWindow", "central", nullptr));
    actionparallel->setText(
        QCoreApplication::translate("MainWindow", "parallel", nullptr));
    actioncolor->setText(
        QCoreApplication::translate("MainWindow", "color", nullptr));
    actionwidth->setText(
        QCoreApplication::translate("MainWindow", "width", nullptr));
    actiondotted->setText(
        QCoreApplication::translate("MainWindow", "dotted", nullptr));
    actionsolid->setText(
        QCoreApplication::translate("MainWindow", "solid", nullptr));
    actioncolor_2->setText(
        QCoreApplication::translate("MainWindow", "color", nullptr));
    actionsize->setText(
        QCoreApplication::translate("MainWindow", "size", nullptr));
    actionnone->setText(
        QCoreApplication::translate("MainWindow", "none", nullptr));
    actioncircle->setText(
        QCoreApplication::translate("MainWindow", "circle", nullptr));
    actionsquare->setText(
        QCoreApplication::translate("MainWindow", "square", nullptr));
    actionback_color->setText(
        QCoreApplication::translate("MainWindow", "color", nullptr));
    actionbmp->setText(
        QCoreApplication::translate("MainWindow", "bmp", nullptr));
    actionjpeg->setText(
        QCoreApplication::translate("MainWindow", "jpeg", nullptr));
    actiongo->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
    w_label_p->setText(
        QCoreApplication::translate("MainWindow", "width p.", nullptr));
    w_label_v->setText(
        QCoreApplication::translate("MainWindow", "width v.", nullptr));
    r_label_x->setText(
        QCoreApplication::translate("MainWindow", "Rotate x:", nullptr));
    r_label_y->setText(
        QCoreApplication::translate("MainWindow", "Rotate y:", nullptr));
    r_label_z->setText(
        QCoreApplication::translate("MainWindow", "Rotate z:", nullptr));
    m_label_x->setText(
        QCoreApplication::translate("MainWindow", "Move x:", nullptr));
    m_label_y->setText(
        QCoreApplication::translate("MainWindow", "Move y:", nullptr));
    m_label_z->setText(
        QCoreApplication::translate("MainWindow", "Move z:", nullptr));
    s_label_x->setText(
        QCoreApplication::translate("MainWindow", "Scale x:", nullptr));
    s_label_y->setText(
        QCoreApplication::translate("MainWindow", "Scale y:", nullptr));
    s_label_z->setText(
        QCoreApplication::translate("MainWindow", "Scale z:", nullptr));
    file_label->setText(
        QCoreApplication::translate("MainWindow", "File name:", nullptr));
    count_v_label->setText(QCoreApplication::translate(
        "MainWindow", "Amount of vertexes:", nullptr));
    count_p_label->setText(QCoreApplication::translate(
        "MainWindow", "Amount of polygons:", nullptr));
    menuFile->setTitle(
        QCoreApplication::translate("MainWindow", "File", nullptr));
    menuType->setTitle(
        QCoreApplication::translate("MainWindow", "Type ", nullptr));
    menuPolygon->setTitle(
        QCoreApplication::translate("MainWindow", "Polygon", nullptr));
    menuVertex->setTitle(
        QCoreApplication::translate("MainWindow", "Vertex", nullptr));
    menuDisplay->setTitle(
        QCoreApplication::translate("MainWindow", "Display", nullptr));
    menuBackground->setTitle(
        QCoreApplication::translate("MainWindow", "Background", nullptr));
    menuSave->setTitle(
        QCoreApplication::translate("MainWindow", "Save", nullptr));
    menuScreencast->setTitle(
        QCoreApplication::translate("MainWindow", "Screencast", nullptr));
  }  // retranslateUi
  Controller *controller;
};

namespace Ui {
class MainWindow : public Ui_MainWindow {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_MAINWINDOW_H
