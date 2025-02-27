cmake_minimum_required(VERSION 3.10)

project(TversuCPP)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(${CMAKE_SOURCE_DIR}/include)

file(GLOB_RECURSE COMMON_SOURCES "src/common/*.cpp")

if (NOT COMMON_SOURCES)
    message(WARNING "No common .cpp files found in src/common")
endif()

set(PROJECTS lab1_2025 lab2_2025 lab3_2025)

foreach(proj ${PROJECTS})
    file(GLOB_RECURSE PROJ_SOURCES "src/${proj}/*.cpp")

    if (NOT PROJ_SOURCES)
        message(WARNING "No .cpp files found for project: ${proj}")
    else()
        set(SOURCES ${PROJ_SOURCES} ${COMMON_SOURCES})

        add_executable(${proj} ${SOURCES})

        set_target_properties(${proj} PROPERTIES
            OUTPUT_NAME ${proj}
            RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
        )
    endif()
endforeach()