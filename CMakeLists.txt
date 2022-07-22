cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_STANDARD 17)

project("playground")

add_subdirectory(sentry)

add_executable(${PROJECT_NAME}
    main.cpp)

target_compile_options(${PROJECT_NAME} PRIVATE
    -Wall -Wextra)

target_link_libraries(${PROJECT_NAME}
    sentry)
