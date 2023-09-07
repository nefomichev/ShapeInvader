cmake_minimum_required(VERSION 3.14)
set(PROJECT_NAME ShapeInvader)
set(SOURCE_FILES src/main.cpp
        src/Vec2.h
        src/Vec2.cpp)

project(${PROJECT_NAME} VERSION 0.1)

# Set C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)


# Enable debug symbols by default
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug 
    CACHE STRING 
      "Choose the type of build (Debug or Release)" 
      FORCE
    )
endif()

# Find SFML shared libraries
find_package(SFML 2.5 
  COMPONENTS 
    system window graphics network audio REQUIRED
  )
include_directories(${SFML_INCLUDE_DIRS})
# Compile executable
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# Link 
target_link_libraries(${PROJECT_NAME} sfml-system sfml-window sfml-graphics sfml-audio sfml-network)


