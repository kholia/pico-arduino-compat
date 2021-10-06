add_library(libedificio INTERFACE)

target_sources(libedificio INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LibEdificio/src/LibEdificio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LibEdificio/src/LibEdificio.h"
)

target_include_directories(libedificio INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LibEdificio/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(libedificio INTERFACE
    arduino-compat
)
