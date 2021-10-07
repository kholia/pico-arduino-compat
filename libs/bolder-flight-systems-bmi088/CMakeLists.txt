add_library(pac-bolder-flight-systems-bmi088 INTERFACE)

target_sources(pac-bolder-flight-systems-bmi088 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BMI088/src/BMI088.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BMI088/src/BMI088.h"
)

target_include_directories(pac-bolder-flight-systems-bmi088 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BMI088/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bolder-flight-systems-bmi088 INTERFACE
    arduino-compat
)
