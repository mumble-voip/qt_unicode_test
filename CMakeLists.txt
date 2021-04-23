cmake_minimum_required(VERSION 3.0)

project(qt_unicode_test)

find_package(Qt5 COMPONENTS Widgets CONFIG REQUIRED)

add_executable(${PROJECT_NAME}
	src/main.cpp
	src/MainWindow.cpp
	src/MainWindow.h
)

set_target_properties(${PROJECT_NAME}
	PROPERTIES
		AUTOMOC ON
		AUTOUIC ON
)

target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Widgets)
