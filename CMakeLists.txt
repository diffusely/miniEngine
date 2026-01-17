cmake_minimum_required(VERSION 3.16)
project(miniEngine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# --------------------
# Add GLFW submodule
# --------------------
add_subdirectory(libs/glfw)

# --------------------
# GLAD
# --------------------
add_library(glad STATIC
    libs/glad/src/glad.c
)
target_include_directories(glad PUBLIC
    libs/glad/include
)

# --------------------
# App sources
# --------------------
file(GLOB_RECURSE APP_SOURCES
    src/*.cpp
)

add_executable(miniEngine
    ${APP_SOURCES}
)

# --------------------
# Link GLFW
# --------------------
target_link_libraries(miniEngine PRIVATE glad glfw)

# --------------------
# Windows system libs
# --------------------
if (WIN32)
    target_link_libraries(miniEngine PRIVATE
        opengl32
    )
endif()
