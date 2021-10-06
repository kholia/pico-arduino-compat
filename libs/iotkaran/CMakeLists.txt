add_library(iotkaran INTERFACE)

target_sources(iotkaran INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino/src/Iotkaran.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino/src/Iotkaran.h"
)

target_include_directories(iotkaran INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(iotkaran INTERFACE
    arduino-compat
)
