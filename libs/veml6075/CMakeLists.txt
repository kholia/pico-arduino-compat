add_library(veml6075 INTERFACE)

target_sources(veml6075 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VEML6075/src/VEML6075.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VEML6075/src/VEML6075.h"
)

target_include_directories(veml6075 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VEML6075/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(veml6075 INTERFACE
    arduino-compat
)
