cmake_minimum_required(VERSION 3.14)
project(Laboratorio5)

set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(runTests test.cpp)
target_link_libraries(runTests gtest_main)

# Cobertura de codigo con gcov (solo GCC / MinGW; MSVC no usa gcov)
if(NOT MSVC)
  target_compile_options(runTests PRIVATE --coverage -O0 -g)
  target_link_options(runTests PRIVATE --coverage)
endif()

include(GoogleTest)
gtest_discover_tests(runTests)
