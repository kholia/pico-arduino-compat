add_library(am2320_asukiaaa INTERFACE)

target_sources(am2320_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AM2320_asukiaaa/src/AM2320_asukiaaa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AM2320_asukiaaa/src/AM2320_asukiaaa.h"
)

target_include_directories(am2320_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AM2320_asukiaaa/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(am2320_asukiaaa INTERFACE
    arduino-compat
)
