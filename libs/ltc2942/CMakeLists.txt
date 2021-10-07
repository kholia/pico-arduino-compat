add_library(pac-ltc2942 INTERFACE)

target_sources(pac-ltc2942 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LTC2942-Arduino-Library/src/LTC2942.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LTC2942-Arduino-Library/src/LTC2942.h"
)

target_include_directories(pac-ltc2942 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LTC2942-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ltc2942 INTERFACE
    arduino-compat
)
