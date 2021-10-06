add_library(dmxsimple INTERFACE)

target_sources(dmxsimple INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DmxSimple/DmxSimple.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DmxSimple/DmxSimple.h"
)

target_include_directories(dmxsimple INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DmxSimple"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dmxsimple INTERFACE
    arduino-compat
)
