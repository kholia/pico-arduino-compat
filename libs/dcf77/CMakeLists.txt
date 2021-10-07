add_library(pac-dcf77 INTERFACE)

target_sources(pac-dcf77 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-DCF77/DCF77.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-DCF77/utility/Utils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-DCF77/DCF77.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-DCF77/utility/Utils.h"
)

target_include_directories(pac-dcf77 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-DCF77"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dcf77 INTERFACE
    arduino-compat
)
