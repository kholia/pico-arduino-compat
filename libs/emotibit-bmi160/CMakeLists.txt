add_library(pac-emotibit-bmi160 INTERFACE)

target_sources(pac-emotibit-bmi160 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BMI160-Arduino/BMI160.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BMI160-Arduino/BMI160Gen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BMI160-Arduino/ss_spi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BMI160-Arduino/CurieIMU.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BMI160-Arduino/internal/ss_spi_101.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BMI160-Arduino/BMI160.h"
  "${CMAKE_CURRENT_LIST_DIR}/BMI160-Arduino/BMI160Gen.h"
  "${CMAKE_CURRENT_LIST_DIR}/BMI160-Arduino/CurieIMU.h"
  "${CMAKE_CURRENT_LIST_DIR}/BMI160-Arduino/internal/ss_spi.h"
)

target_include_directories(pac-emotibit-bmi160 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BMI160-Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-emotibit-bmi160 INTERFACE
    arduino-compat
)
