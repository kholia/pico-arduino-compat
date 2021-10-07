add_library(pac-elt-s300-library INTERFACE)

target_sources(pac-elt-s300-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ELT_S300_HOLLY/src/s300i2c.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ELT_S300_HOLLY/src/s300i2c.h"
)

target_include_directories(pac-elt-s300-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ELT_S300_HOLLY/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-elt-s300-library INTERFACE
    arduino-compat
)
