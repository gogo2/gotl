cmake_minimum_required(VERSION 3.5)
project(GOTL)

#[[set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic -Wall")]]
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0 -pedantic -Wall")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)
add_subdirectory(src)
add_subdirectory(tests)




