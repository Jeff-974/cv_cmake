PROJECT(hello)

set(CMAKE_CXX_FLAGS "${CAMKE_CXX_FLAGS} -std=c++17 ")

CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

add_subdirectory (src)
