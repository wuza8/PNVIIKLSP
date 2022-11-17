cmake_minimum_required(VERSION 3.10)
project(PNVIIKLSP VERSION 0.1)
add_executable(PNVIIKLSP 
    main.cpp 
    pnviiklsp.cpp 
    math/vertex.cpp 
    math/linearfunction.cpp )
target_include_directories(PNVIIKLSP PUBLIC "${PROJECT_SOURCE_DIR}/include")