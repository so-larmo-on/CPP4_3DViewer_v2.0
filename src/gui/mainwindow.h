/**
 * @file mainwindow.h
 * @brief Файл содержит объявления классов виджета
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QColor>
#include <QColorDialog>
#include <QMainWindow>

#include "../back/s21_controller.h"

using namespace s21;
namespace Ui {

class MainWindow;
}
/**
 * @brief Класс виджета игры
 */
class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  /**
   * @brief конструктор
   */
  explicit MainWindow(QWidget *parent = 0);
  /**
   * @brief деструкотр
   */
  ~MainWindow();

 private slots:
  /**
   * @brief функция обработки слайдера
   */
  void on_r_slider_x_valueChanged(int value);
  /**
   * @brief функция обработки слайдера
   */
  void on_r_slider_y_valueChanged(int value);
  /**
   * @brief функция обработки слайдера
   */
  void on_r_slider_z_valueChanged(int value);
  /**
   * @brief функция обработки действия
   */
  void on_actioncube_obj_triggered();
  /**
   * @brief функция обработки действия
   */
  void on_actionseat_obj_triggered();
  /**
   * @brief функция обработки действия
   */
  void on_actionlighter_obj_triggered();
  /**
   * @brief функция обработки действия
   */
  void on_actiondeer_obj_triggered();
  /**
   * @brief функция обработки действия
   */
  void on_actioncolor_triggered();
  /**
   * @brief функция обработки действия
   */
  void on_actioncolor_2_triggered();
  /**
   * @brief функция обработки слайдера
   */
  void on_w_slider_v_valueChanged(int value);
  /**
   * @brief функция обработки слайдера
   */
  void on_w_slider_p_valueChanged(int value);
  /**
   * @brief функция обработки действия
   */
  void on_actiondotted_triggered();
  /**
   * @brief функция обработки действия
   */
  void on_actionsolid_triggered();
  /**
   * @brief функция обработки слайдера
   */
  void on_m_slider_x_valueChanged(int value);
  /**
   * @brief функция обработки слайдера
   */
  void on_m_slider_y_valueChanged(int value);
  /**
   * @brief функция обработки слайдера
   */
  void on_m_slider_z_valueChanged(int value);
  /**
   * @brief функция обработки слайдера
   */
  void on_s_slider_x_valueChanged(int value);
  /**
   * @brief функция обработки слайдера
   */
  void on_s_slider_y_valueChanged(int value);
  /**
   * @brief функция обработки слайдера
   */
  void on_s_slider_z_valueChanged(int value);
  /**
   * @brief функция обработки действия
   */
  void on_actioncentral_triggered();
  /**
   * @brief функция обработки действия
   */
  void on_actionparallel_triggered();
  /**
   * @brief функция обработки действия
   */
  void on_actioncircle_triggered();
  /**
   * @brief функция обработки действия
   */
  void on_actionsquare_triggered();
  /**
   * @brief функция обработки действия
   */
  void on_actionnone_triggered();
  /**
   * @brief функция обработки действия
   */
  void on_actionback_color_triggered();

 private:
  Ui::MainWindow *ui;
};

#endif  // MAINWINDOW_H
