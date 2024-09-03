/**
 * @file s21_controller.h
 * @brief Файл содержит объявления структур игры, всех функций backend'а и
 * макросов.
 */
#ifndef S21_CONTROLLER_H
#define S21_CONTROLLER_H

#include "s21_model.h"

namespace s21 {
/**
 * @brief класс Контроллера
 */
class Controller {
 private:
  static Controller *obj;
  /**
   * @brief Конструктор
   */
  Controller() {}

 public:
  /**
   * @brief Функция получения моделя контроллера
   */
  static Controller *getObj() {
    if (!obj) {
      obj = new Controller();
    }
    return obj;
  }
  /**
   * @brief Функция очистки
   */
  void clean() {
    vertex.clear();
    polygon.clear();
    amount_of_polygons = 0;
    amount_of_vertexes = 0;
    ex_vals.max_module = -2;
    ex_vals.max_module = -2;
    ex_vals.max_x = -2;
    ex_vals.max_y = -2;
    ex_vals.max_z = -2;
    ex_vals.min_x = 2;
    ex_vals.min_y = 2;
    ex_vals.min_z = 2;
  }
  std::size_t amount_of_polygons = 0;
  std::size_t amount_of_vertexes = 0;
  std::vector<Vertex> vertex;
  std::vector<Polygon> polygon;
  ExtremeValues ex_vals;
  /**
   * @brief парсер
   */
  void parse(const char *filename);
  /**
   * @brief нахождение максимумов и мимнимумов
   */
  void find_max_min();
  /**
   * @brief нормализация размера
   */
  void normSize();
  /**
   * @brief центрирование
   */
  void normCenter();
};

}  // namespace s21

#endif