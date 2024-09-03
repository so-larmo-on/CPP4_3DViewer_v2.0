#include "s21_controller.h"

using namespace s21;

void Controller::normCenter() {
  Controller *obj = Controller::getObj();
  double center_x =
      obj->ex_vals.min_x + (obj->ex_vals.max_x - obj->ex_vals.min_x) / 2;
  double center_y =
      obj->ex_vals.min_y + (obj->ex_vals.max_y - obj->ex_vals.min_y) / 2;
  double center_z =
      obj->ex_vals.min_z + (obj->ex_vals.max_z - obj->ex_vals.min_z) / 2;
  for (auto &vertex : obj->vertex) {
    vertex.x -= center_x;
    vertex.y -= center_y;
    vertex.z -= center_z;
  }
  obj->ex_vals.max_x -= center_x;
  obj->ex_vals.min_x -= center_x;

  obj->ex_vals.max_y -= center_y;
  obj->ex_vals.min_y -= center_y;

  obj->ex_vals.max_z -= center_z;
  obj->ex_vals.max_z -= center_z;
}

void Controller::normSize() {
  Controller *obj = Controller::getObj();
  for (auto &vertex : obj->vertex) {
    vertex.x /= obj->ex_vals.max_module;
    vertex.y /= obj->ex_vals.max_module;
    vertex.z /= obj->ex_vals.max_module;
  }

  obj->ex_vals.max_x /= obj->ex_vals.max_module;
  obj->ex_vals.min_x /= obj->ex_vals.max_module;

  obj->ex_vals.max_y /= obj->ex_vals.max_module;
  obj->ex_vals.min_y /= obj->ex_vals.max_module;

  obj->ex_vals.max_z /= obj->ex_vals.max_module;
  obj->ex_vals.min_z /= obj->ex_vals.max_module;
}

void Controller::find_max_min() {
  Controller *obj = Controller::getObj();
  obj->ex_vals.max_x = obj->vertex[0].x;

  obj->ex_vals.min_x = obj->vertex[0].x;

  obj->ex_vals.max_y = obj->vertex[0].y;
  obj->ex_vals.min_y = obj->vertex[0].y;

  obj->ex_vals.max_z = obj->vertex[0].z;
  obj->ex_vals.max_z = obj->vertex[0].z;
  for (const auto &vert : obj->vertex) {
    if (obj->ex_vals.max_x < vert.x) {
      obj->ex_vals.max_x = vert.x;
    }
    if (obj->ex_vals.max_y < vert.y) {
      obj->ex_vals.max_y = vert.y;
    }
    if (obj->ex_vals.max_z < vert.z) {
      obj->ex_vals.max_z = vert.z;
    }

    if (obj->ex_vals.min_x > vert.x) {
      obj->ex_vals.min_x = vert.x;
    }
    if (obj->ex_vals.min_y > vert.y) {
      obj->ex_vals.min_y = vert.y;
    }
    if (obj->ex_vals.min_z > vert.z) {
      obj->ex_vals.min_z = vert.z;
    }
  }
  auto max_abs_min =
      std::max({std::fabs(obj->ex_vals.min_x), std::fabs(obj->ex_vals.min_y),
                std::fabs(obj->ex_vals.min_z)});
  obj->ex_vals.max_module = std::max({obj->ex_vals.max_x, obj->ex_vals.max_y,
                                      obj->ex_vals.max_z, max_abs_min});
}

void Controller::parse(const char *filename) {
  Controller *obj = Controller::getObj();

  std::ifstream file(filename);
  if (!file) {
    std::cerr << "Error opening file: " << filename << std::endl;
    exit(5);
  }
  char c;
  double point;
  int vertexCount = 0;
  int polygonCount = 0;
  while (file.get(c)) {
    if (c == 'v') {
      file.get(c);
      if (c == ' ') {
        Vertex vert;
        file >> point;
        vert.x = point;
        file >> point;
        vert.y = point;
        file >> point;
        vert.z = point;

        obj->vertex.push_back(vert);
        vertexCount++;
      }

    } else if (c == 'f') {
      Polygon pol;
      int point;
      while (file.get(c) && c != '\n') {
        if (c == ' ' && file.peek() != '\n') {
          if (file >> point) {
            pol.vertices_indices.push_back(point);
          }
        }
      }
      obj->polygon.push_back(pol);
      polygonCount++;
    }
  }

  file.close();
  obj->amount_of_polygons = polygonCount;
  obj->amount_of_vertexes = vertexCount;

  find_max_min();
  normSize();
  normCenter();
}
