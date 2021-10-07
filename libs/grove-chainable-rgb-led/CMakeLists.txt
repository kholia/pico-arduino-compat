add_library(pac-grove-chainable-rgb-led INTERFACE)

target_sources(pac-grove-chainable-rgb-led INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Chainable_RGB_LED/ChainableLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Chainable_RGB_LED/ChainableLED.h"
)

target_include_directories(pac-grove-chainable-rgb-led INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_Chainable_RGB_LED"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-chainable-rgb-led INTERFACE
    arduino-compat
)
