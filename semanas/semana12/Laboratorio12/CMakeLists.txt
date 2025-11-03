# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(Laboratorio12Tests)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

# Buscar GoogleTest instalado en el sistema
find_package(GTest REQUIRED)

add_executable(test_calculator
    test_calculator.cpp
)

target_link_libraries(test_calculator
    GTest::GTest
    GTest::Main
)

add_test(NAME CalculatorTests COMMAND test_calculator)
