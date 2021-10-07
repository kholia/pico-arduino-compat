add_library(pac-am2320_asukiaaa INTERFACE)

target_sources(pac-am2320_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AM2320_asukiaaa/src/AM2320_asukiaaa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AM2320_asukiaaa/src/AM2320_asukiaaa.h"
)

target_include_directories(pac-am2320_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AM2320_asukiaaa/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-am2320_asukiaaa INTERFACE
    arduino-compat
)
