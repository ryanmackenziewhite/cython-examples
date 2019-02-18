cmake_minimum_required (VERSION 2.8)

# projectname is the same as the main-executable
project(simpletool)

add_definitions('-g')
add_definitions('-Wall')
#add_definitions('-std=c++11')

#Bring the headers, such as SimpleClass.h into the project
include_directories(include)

#set the source file locations
set(SOURCES cpp/simpletool.cpp cpp/SimpleClass.cpp)
#Can also be achieved with globbing
#file(GLOB SOURCES "src/*cpp)
#next create an exectable from simpletool
add_executable(${PROJECT_NAME} ${SOURCES})

#Generate a shared library so we can try building the python bindings
add_library(simpleclass SHARED ${SOURCES})
#add_custom_target(${PROJECT_NAME}-symlink ALL ln --force -s ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/${PROJECT_NAME} DEPENDS ${PROJECT_NAME})
#set_directory_properties(PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES ${CMAKE_SOURCE_DIR}/${PROJECT_NAME})
