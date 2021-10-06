add_library(espstringtemplate INTERFACE)

target_sources(espstringtemplate INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPStringTemplate/src/ESPStringTemplate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPStringTemplate/src/ESPStringTemplate.h"
)

target_include_directories(espstringtemplate INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPStringTemplate/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(espstringtemplate INTERFACE
    arduino-compat
)
