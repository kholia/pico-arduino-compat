add_library(siktec-keys INTERFACE)

target_sources(siktec-keys INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SIKTEC-Keys/src/SIKTEC_Keys.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SIKTEC-Keys/src/SIKTEC_Keys.h"
)

target_include_directories(siktec-keys INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SIKTEC-Keys/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(siktec-keys INTERFACE
    arduino-compat
)
