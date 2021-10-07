add_library(pac-zmotor3library INTERFACE)

target_sources(pac-zmotor3library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Zmotor3/Zmotor3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Zmotor3/Zmotor3.h"
)

target_include_directories(pac-zmotor3library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Zmotor3"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-zmotor3library INTERFACE
    arduino-compat
)
