/**
 * @file s21_model.h
 * @brief Файл содержит объявления структур игры, всех функций backend'а и
 * макросов.
 */
#ifndef S21_MODEL_H
#define S21_MODEL_H

#include <string.h>

#include <fstream>
#include <iostream>
#include <vector>

namespace s21 {
/**
 * @brief структура вертекса
 */
typedef struct Vertex {
  float x;
  float y;
  float z;
  Vertex() : x(0), y(0), z(0){};
  Vertex(float x, float y, float z) : x(x), y(y), z(z){};
} Vertex;

/**
 * @brief структура экстремумов
 */
typedef struct ExtremeValues {
  float max_module = -2;
  float max_x = -2;
  float max_y = -2;
  float max_z = -2;
  float min_x = 2;
  float min_y = 2;
  float min_z = 2;
} ExtremeValues;

/**
 * @brief структура полигона
 */
typedef struct Polygon {
  Polygon() = default;
  explicit Polygon(std::vector<std::size_t> &p) : vertices_indices(p){};
  std::vector<std::size_t> vertices_indices;
} Polygon;

}  // namespace s21

#endif