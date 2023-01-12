cmake_minimum_required(VERSION 3.10)
project(PNVIIKLSP VERSION 0.1)

set(CMAKE_THREAD_LIBS_INIT "-lpthread")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
set(CMAKE_HAVE_THREADS_LIBRARY 1)
set(CMAKE_USE_WIN32_THREADS_INIT 0)
set(CMAKE_USE_PTHREADS_INIT 1)
set(THREADS_PREFER_PTHREAD_FLAG ON)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})
add_executable(PNVIIKLSP 
    main.cpp 
    pnviiklsp.cpp 
    math/vertex.cpp 
    math/linearfunction.cpp
    cmdline/cmdfunctionloader.cpp 
    cmdline/cmdregistry.cpp 
    cmdline/inlinecommandhandler.cpp
    cmdline/helpcommand.cpp
    services/functionservice.cpp
    renderer/renderer.cpp)
target_link_libraries(PNVIIKLSP ${SDL2_LIBRARIES})
target_include_directories(PNVIIKLSP PUBLIC "${PROJECT_SOURCE_DIR}/include")