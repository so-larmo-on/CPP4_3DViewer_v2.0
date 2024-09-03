#include "mainwindow.h"

#include "../back/s21_controller.h"
#include "ui_mainwindow.h"
using namespace s21;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_r_slider_x_valueChanged(int value) {
  Q_UNUSED(value);
  ui->openGLWidget->setRotation(ui->r_slider_x->value(),
                                ui->r_slider_y->value(),
                                ui->r_slider_z->value());
}

void MainWindow::on_r_slider_y_valueChanged(int value) {
  Q_UNUSED(value);
  ui->openGLWidget->setRotation(ui->r_slider_x->value(),
                                ui->r_slider_y->value(),
                                ui->r_slider_z->value());
}

void MainWindow::on_r_slider_z_valueChanged(int value) {
  Q_UNUSED(value);
  ui->openGLWidget->setRotation(ui->r_slider_x->value(),
                                ui->r_slider_y->value(),
                                ui->r_slider_z->value());
}

void MainWindow::on_m_slider_x_valueChanged(int value) {
  Q_UNUSED(value);
  ui->openGLWidget->setMovement('x',
                                (float)(ui->m_slider_x->value() - 50) / 20);
}

void MainWindow::on_m_slider_y_valueChanged(int value) {
  Q_UNUSED(value);
  ui->openGLWidget->setMovement('y',
                                (float)(ui->m_slider_y->value() - 50) / 20);
}

void MainWindow::on_m_slider_z_valueChanged(int value) {
  Q_UNUSED(value);
  ui->openGLWidget->setMovement('z',
                                (float)(ui->m_slider_z->value() - 50) / 20);
}

void MainWindow::on_s_slider_x_valueChanged(int value) {
  Q_UNUSED(value);
  ui->openGLWidget->setScale('x', ui->s_slider_x->value());
}

void MainWindow::on_s_slider_y_valueChanged(int value) {
  Q_UNUSED(value);
  ui->openGLWidget->setScale('y', ui->s_slider_y->value());
}

void MainWindow::on_s_slider_z_valueChanged(int value) {
  Q_UNUSED(value);
  ui->openGLWidget->setScale('z', ui->s_slider_z->value());
}

void MainWindow::on_actioncube_obj_triggered() {
  Controller *obj = Controller::getObj();
  const char *filename = "../obj_files/cube.obj";
  obj->parse(filename);
  ui->file_label->setText(tr("File name %1").arg("cube.obj"));
  ui->count_v_label->setText(
      tr("Amount of vertexes %1").arg(obj->amount_of_vertexes));
  ui->count_p_label->setText(
      tr("Amount of polygons %1").arg(obj->amount_of_polygons));
  ui->openGLWidget->update();
}
void MainWindow::on_actionseat_obj_triggered() {
  Controller *obj = Controller::getObj();
  const char *filename = "../obj_files/seat.obj";
  obj->parse(filename);
  ui->file_label->setText(tr("File name %1").arg("seat.obj"));
  ui->count_v_label->setText(
      tr("Amount of vertexes %1").arg(obj->amount_of_vertexes));
  ui->count_p_label->setText(
      tr("Amount of polygons %1").arg(obj->amount_of_polygons));
  ui->openGLWidget->update();
}
void MainWindow::on_actionlighter_obj_triggered() {
  Controller *obj = Controller::getObj();
  const char *filename = "../obj_files/lighter.obj";
  obj->parse(filename);
  ui->file_label->setText(tr("File name %1").arg("lighter.obj"));
  ui->count_v_label->setText(
      tr("Amount of vertexes %1").arg(obj->amount_of_vertexes));
  ui->count_p_label->setText(
      tr("Amount of polygons %1").arg(obj->amount_of_polygons));
  ui->openGLWidget->update();
}
void MainWindow::on_actiondeer_obj_triggered() {
  Controller *obj = Controller::getObj();
  const char *filename = "../obj_files/deer.obj";
  obj->parse(filename);
  ui->file_label->setText(tr("File name %1").arg("deer.obj"));
  ui->count_v_label->setText(
      tr("Amount of vertexes %1").arg(obj->amount_of_vertexes));
  ui->count_p_label->setText(
      tr("Amount of polygons %1").arg(obj->amount_of_polygons));
  ui->openGLWidget->update();
}
void MainWindow::on_actioncolor_triggered() {
  ui->openGLWidget->polygon_view.color = QColorDialog::getColor();
  ui->openGLWidget->update();
}
void MainWindow::on_actioncolor_2_triggered() {
  ui->openGLWidget->vertex_view.color = QColorDialog::getColor();
  ui->openGLWidget->update();
}
void MainWindow::on_actionback_color_triggered() {
  ui->openGLWidget->back_color = QColorDialog::getColor();
  ui->openGLWidget->update();
}
void MainWindow::on_w_slider_v_valueChanged(int value) {
  Q_UNUSED(value);
  ui->openGLWidget->vertex_view.width = ui->w_slider_v->value() / 2;
  ui->openGLWidget->update();
}

void MainWindow::on_w_slider_p_valueChanged(int value) {
  Q_UNUSED(value);
  ui->openGLWidget->polygon_view.width = ui->w_slider_p->value() / 4;
  ui->openGLWidget->update();
}

void MainWindow::on_actiondotted_triggered() {
  ui->openGLWidget->polygon_view.dotted = true;
  ui->openGLWidget->polygon_view.solid = false;
  ui->openGLWidget->update();
}
void MainWindow::on_actionsolid_triggered() {
  ui->openGLWidget->polygon_view.solid = true;
  ui->openGLWidget->polygon_view.dotted = false;
  ui->openGLWidget->update();
}
void MainWindow::on_actionparallel_triggered() {
  ui->openGLWidget->parallel = true;
  ui->openGLWidget->central = false;
  ui->openGLWidget->type_changed = true;
  ui->openGLWidget->update();
}
void MainWindow::on_actioncentral_triggered() {
  ui->openGLWidget->central = true;
  ui->openGLWidget->parallel = false;
  ui->openGLWidget->type_changed = true;
  ui->openGLWidget->update();
}

void MainWindow::on_actionnone_triggered() {
  ui->openGLWidget->none_projection = true;
  ui->openGLWidget->circle_projection = false;
  ui->openGLWidget->square_projection = false;
  ui->openGLWidget->projection_changed = true;
  ui->openGLWidget->update();
}
void MainWindow::on_actioncircle_triggered() {
  ui->openGLWidget->none_projection = false;
  ui->openGLWidget->circle_projection = true;
  ui->openGLWidget->square_projection = false;
  ui->openGLWidget->projection_changed = true;
  ui->openGLWidget->update();
}
void MainWindow::on_actionsquare_triggered() {
  ui->openGLWidget->none_projection = false;
  ui->openGLWidget->circle_projection = false;
  ui->openGLWidget->square_projection = true;
  ui->openGLWidget->projection_changed = true;
  ui->openGLWidget->update();
}
