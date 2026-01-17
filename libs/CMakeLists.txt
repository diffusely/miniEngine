add_library(glad
    libs/glad/src/glad.c
)

target_include_directories(glad PUBLIC
    libs/glad/include
)
