cmake_minimum_required(VERSION 3.16)

project(console_test1 LANGUAGES CXX) #use for ${PROJECT_NAME}

set(CMAKE_AUTOMOC ON)
# set(CMAKE_AUTOUIC ON) #for GUI apps

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

qt_add_executable(${PROJECT_NAME}
    main.cpp Rial.cpp Rial.h
)

target_link_libraries(${PROJECT_NAME} PUBLIC
    Qt::Core
)

install(TARGETS ${PROJECT_NAME}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})



