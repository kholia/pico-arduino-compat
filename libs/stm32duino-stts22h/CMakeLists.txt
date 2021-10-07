add_library(pac-stm32duino-stts22h INTERFACE)

target_sources(pac-stm32duino-stts22h INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/STTS22H/src/STTS22HSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/STTS22H/src/stts22h_reg.c"
  "${CMAKE_CURRENT_LIST_DIR}/STTS22H/src/STTS22HSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/STTS22H/src/stts22h_reg.h"
)

target_include_directories(pac-stm32duino-stts22h INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/STTS22H/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-stts22h INTERFACE
    arduino-compat
)
