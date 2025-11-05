cmake_minimum_required(VERSION 3.15)
project(FidelityFX_FSR4_Sample LANGUAGES CXX)

add_executable(fsr4_sample src/main.cpp)

# Include the Upscaler/public headers in the repo
target_include_directories(fsr4_sample PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../../../Kits/FidelityFX/upscalers/include
    ${CMAKE_CURRENT_SOURCE_DIR}/../../../Kits/FidelityFX/api/include
)

target_compile_features(fsr4_sample PRIVATE cxx_std_17)

if(MSVC)
    target_compile_options(fsr4_sample PRIVATE /W4 /EHsc)
else()
    target_compile_options(fsr4_sample PRIVATE -Wall -Wextra -Wpedantic)
endif()
