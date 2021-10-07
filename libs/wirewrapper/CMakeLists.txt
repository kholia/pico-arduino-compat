add_library(pac-wirewrapper INTERFACE)

target_sources(pac-wirewrapper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WireWrapper/src/WireWrapper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WireWrapper/src/WireWrapper.h"
)

target_include_directories(pac-wirewrapper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WireWrapper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wirewrapper INTERFACE
    arduino-compat
)
