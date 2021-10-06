add_library(relaymodule INTERFACE)

target_sources(relaymodule INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RelayModule/src/RelayModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RelayModule/src/RelayModule.h"
)

target_include_directories(relaymodule INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RelayModule/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(relaymodule INTERFACE
    arduino-compat
)
