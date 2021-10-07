add_library(pac-iotkaran INTERFACE)

target_sources(pac-iotkaran INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino/src/Iotkaran.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino/src/Iotkaran.h"
)

target_include_directories(pac-iotkaran INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-iotkaran INTERFACE
    arduino-compat
)
