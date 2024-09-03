/**
 * @file mainwindow.h
 * @brief Файл содержит объявления классов виджета
 */
#ifndef QGLBEGIN_H
#define QGLBEGIN_H
#define GL_SILENCE_DEPRECATION

#include <QColor>
#include <QColorDialog>
#include <QOpenGLWidget>
#include <QtWidgets>
#include <fstream>

#include "../back/s21_controller.h"
using namespace s21;

/**
 * @brief структура настроек полигона
 */
typedef struct Polygon_view {
  QColor color;
  float width;
  bool dotted;
  bool solid;
} Polygon_view;

/**
 * @brief структура настроек полигона
 */
typedef struct Vertex_view {
  QColor color;
  float width;
} Vertex_view;
/**
 * @brief Класс glwindow
 */
class QGLBegin : public QOpenGLWidget {
  Q_OBJECT
 public:
  /**
   * @brief конструктор
   */
  QGLBegin(QWidget *parent = 0);
  /**
   * @brief функция поворота
   */
  void setRotation(float x, float y, float z);
  /**
   * @brief функция движения
   */
  void setMovement(char c, float val);
  /**
   * @brief функция масштабирования
   */
  void setScale(char c, float val);
  Polygon_view polygon_view;
  Vertex_view vertex_view;
  Controller *controller;
  bool central;
  bool parallel;
  bool type_changed;
  bool circle_projection;
  bool square_projection;
  bool none_projection;
  bool projection_changed;
  QColor back_color;

 protected:
  /**
   * @brief функция инициализации окна
   */
  void initializeGL();
  /**
   * @brief функция отрисовки
   */
  void paintGL();
  /**
   * @brief функция изменения размера
   */
  void resizeGL(int width, int height);

 private:
  float xrot;
  float yrot;
  float zrot;

  float xmov;
  float ymov;
  float zmov;

  float xscale;
  float yscale;
  float zscale;
};

#endif  // QGLBEGIN_H
