add_library(pac-ldc1312-1314-i2c-library INTERFACE)

target_sources(pac-ldc1312-1314-i2c-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LDC1312-Arduino/ldc1312_lib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LDC1312-Arduino/ldc1312_lib.h"
)

target_include_directories(pac-ldc1312-1314-i2c-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LDC1312-Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ldc1312-1314-i2c-library INTERFACE
    arduino-compat
)
