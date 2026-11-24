project(arc_raiders_overlay LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
include_directories(include)
add_executable(arc_raiders_overlay src/arc_raiders_overlay_core.cpp)
