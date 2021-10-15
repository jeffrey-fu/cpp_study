cmake_minimum_required(VERSION 3.15)
project(study)

set(CMAKE_CXX_STANDARD 17)

# find all `cpp` file in root path
file (GLOB files *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()