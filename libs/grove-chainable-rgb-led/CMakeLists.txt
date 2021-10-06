add_library(grove-chainable-rgb-led INTERFACE)

target_sources(grove-chainable-rgb-led INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Chainable_RGB_LED/ChainableLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Chainable_RGB_LED/ChainableLED.h"
)

target_include_directories(grove-chainable-rgb-led INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_Chainable_RGB_LED"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grove-chainable-rgb-led INTERFACE
    arduino-compat
)
