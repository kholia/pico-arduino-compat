add_library(zmotor3library INTERFACE)

target_sources(zmotor3library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Zmotor3/Zmotor3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Zmotor3/Zmotor3.h"
)

target_include_directories(zmotor3library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Zmotor3"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(zmotor3library INTERFACE
    arduino-compat
)
