cmake_minimum_required(VERSION 2.8.11)

project(structCalculator)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5Widgets)

file(GLOB INCLUDES include/*.h)
file(GLOB SOURCES src/*.cpp)
file(GLOB UIFILES src/*.ui)

add_executable(${PROJECT_NAME} ${INCLUDES} ${SOURCES} ${UIFILES})
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)