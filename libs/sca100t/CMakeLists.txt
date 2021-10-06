add_library(sca100t INTERFACE)

target_sources(sca100t INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SCA100T/src/SCA100T.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SCA100T/src/SCA100T.h"
)

target_include_directories(sca100t INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SCA100T/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sca100t INTERFACE
    arduino-compat
)
