cmake_minimum_required(VERSION 3.5)

project(qglbegin VERSION 0.1 LANGUAGES CXX )

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(
    CMAKE_CXX_FLAGS
    "${CMAKE_CXX_FLAGS} -Werror  -fsanitize=address " #-Wall -Wextra
  )

#   set (CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-omit-frame-pointer -fsanitize=address")
#   set (CMAKE_LINKER_FLAGS_DEBUG "${CMAKE_LINKER_FLAGS_DEBUG} -fno-omit-frame-pointer -fsanitize=address")


    add_executable(

    qglbegin
    main.cpp
    back/s21_model.h
    back/s21_controller.h
    back/s21_controller.cpp
    gui/qglbegin.cpp
    gui/qglbegin.h
    gui/mainwindow.h
    gui/mainwindow.cpp
    gui/ui_mainwindow.h

    )
    target_link_libraries(qglbegin PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
    target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::OpenGLWidgets)
   
    set_target_properties(qglbegin PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
    )
    find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
    find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
    find_package(Qt6 REQUIRED COMPONENTS OpenGLWidgets)
    if(QT_VERSION_MAJOR EQUAL 6)
     qt_finalize_executable(qglbegin)
    endif()

