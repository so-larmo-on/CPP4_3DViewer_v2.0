#include <gtest/gtest.h>

#include <iostream>

#include "../s21_controller.cpp"
#include "../s21_model.h"

using namespace s21;
Controller *Controller::obj = nullptr;

namespace {
TEST(Model, cube) {
  s21::Controller *obj = s21::Controller::getObj();
  obj->parse("obj_files/cube.obj");
}

TEST(Model, seat) {
  s21::Controller *obj = s21::Controller::getObj();
  obj->clean();
  obj->parse("obj_files/seat.obj");
}

TEST(Model, light) {
  s21::Controller *obj = s21::Controller::getObj();
  obj->clean();
  obj->parse("obj_files/lighter.obj");
}

TEST(Model, deer) {
  s21::Controller *obj = s21::Controller::getObj();
  obj->clean();
  obj->parse("obj_files/deer.obj");
}
}  // namespace

int main() {
  testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}