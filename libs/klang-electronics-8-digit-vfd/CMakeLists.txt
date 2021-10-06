add_library(klang-electronics-8-digit-vfd INTERFACE)

target_sources(klang-electronics-8-digit-vfd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/8_digit_vfd/8_digit_vfd.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/8_digit_vfd/8_digit_vfd.h"
)

target_include_directories(klang-electronics-8-digit-vfd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/8_digit_vfd"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(klang-electronics-8-digit-vfd INTERFACE
    arduino-compat
)
