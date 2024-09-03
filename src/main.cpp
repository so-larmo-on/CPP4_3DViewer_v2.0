
/*!
 * \mainpage
 * \author stanleyl && grangerm
 * \version 1.0
 *
 * \section intro_sec 3dViewer
 * Проект создан при помощи:
 * 1. C++ language
 * 2. Qt
 * 3. Doxygen
 * 4. QOPenGlWindow
 *
 * \section brief_sec Brief
 * В данном проекте реализовано на языке программирования С++
 * в парадигме объектно-ориентированного программирования приложение
 * для просмотра 3D моделей в каркасном виде, реализующее те же самые функции,
 * что и разработанное ранее приложение в проекте 3DViewer v1.0.
 *
 */
#include "back/s21_controller.h"
#include "gui/mainwindow.h"
#include "gui/ui_mainwindow.h"

using namespace s21;

Controller *Controller::obj = nullptr;

int main(int argc, char *argv[]) {  //
  QApplication a(argc, argv);
  MainWindow w;
  w.show();
  return a.exec();
}
