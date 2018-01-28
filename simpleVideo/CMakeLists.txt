cmake_minimum_required(VERSION 3.5)
project(simpleWebcam)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV 3.2.0 REQUIRED)
message("Use OpenCV: ${OpenCV_VERSION}")

set(SOURCE_FILES
        src/main.cpp
        )

add_executable(displayWebcam ${SOURCE_FILES})
target_link_libraries(displayWebcam ${OpenCV_LIBS})
