add_library(pac-espstringtemplate INTERFACE)

target_sources(pac-espstringtemplate INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPStringTemplate/src/ESPStringTemplate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPStringTemplate/src/ESPStringTemplate.h"
)

target_include_directories(pac-espstringtemplate INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPStringTemplate/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-espstringtemplate INTERFACE
    arduino-compat
)
