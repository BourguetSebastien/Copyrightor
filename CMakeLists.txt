cmake_minimum_required(VERSION 3.5)

project(Copyrightor)

include_directories( $ENV{HOME}/Qt/ )

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_PREFIX_PATH /Users/sebastienbourguet/Qt/5.6/clang_64/lib/cmake/)
set(CMAKE_MODULE_PATH /Users/sebastienbourguet/Qt/5.6/clang_64/lib/cmake/)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(${Qt5Widgets_INCLUDES})
include_directories(${Qt5Core_INCLUDES})
include_directories(${Qt5Gui_INCLUDES})


find_package( Qt REQUIRED COMPONENTS Core Widgets Gui )
find_package( Qt5Widgets )

set(SOURCE_FILES
    Build/moc_mainwindow.cpp
    Build/qrc_recources.cpp
    main.cpp
    mainwindow.cpp
    mainwindow.h)

add_executable(Copyrightor ${SOURCE_FILES})

target_link_libraries(Copyrightor Qt5Widgets)

target_link_libraries( Copyrightor ${QT_LIBRARIES})

target_link_libraries(${PROJECT_NAME} ${QT_LIBRARIES})