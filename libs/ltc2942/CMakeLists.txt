add_library(ltc2942 INTERFACE)

target_sources(ltc2942 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LTC2942-Arduino-Library/src/LTC2942.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LTC2942-Arduino-Library/src/LTC2942.h"
)

target_include_directories(ltc2942 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LTC2942-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ltc2942 INTERFACE
    arduino-compat
)
