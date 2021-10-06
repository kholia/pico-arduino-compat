add_library(exosite INTERFACE)

target_sources(exosite INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino_exosite_library/Exosite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_exosite_library/Exosite.h"
)

target_include_directories(exosite INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino_exosite_library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(exosite INTERFACE
    arduino-compat
)
