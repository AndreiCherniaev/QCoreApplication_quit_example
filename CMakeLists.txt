cmake_minimum_required(VERSION 3.14)

project(console_test1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

qt_add_executable(console_test1
    main.cpp rial.cpp rial.h
)

target_link_libraries(console_test1 PUBLIC
    Qt::Core
)

install(TARGETS console_test1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})



