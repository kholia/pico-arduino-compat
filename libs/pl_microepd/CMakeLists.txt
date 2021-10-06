add_library(pl_microepd INTERFACE)

target_sources(pl_microepd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Paperino/src/PL_microEPD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Paperino/src/PL_microEPD.h"
)

target_include_directories(pl_microepd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Paperino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(pl_microepd INTERFACE
    arduino-compat
    adafruit-gfx-library
)
