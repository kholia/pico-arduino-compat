add_library(urtclib INTERFACE)

target_sources(urtclib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uRTCLib/src/uRTCLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uRTCLib/src/uRTCLib.h"
)

target_include_directories(urtclib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uRTCLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(urtclib INTERFACE
    arduino-compat
)
