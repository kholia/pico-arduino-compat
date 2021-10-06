add_library(libsemaforo INTERFACE)

target_sources(libsemaforo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LibSemaforo/src/LibSemaforo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LibSemaforo/src/LibSemaforo.h"
)

target_include_directories(libsemaforo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LibSemaforo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(libsemaforo INTERFACE
    arduino-compat
)
