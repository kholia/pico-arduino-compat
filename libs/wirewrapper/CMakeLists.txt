add_library(wirewrapper INTERFACE)

target_sources(wirewrapper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WireWrapper/src/WireWrapper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WireWrapper/src/WireWrapper.h"
)

target_include_directories(wirewrapper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WireWrapper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wirewrapper INTERFACE
    arduino-compat
)
