add_library(tinyxml INTERFACE)

target_sources(tinyxml INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyXML/TinyXML.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyXML/TinyXMLTable.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyXML/TinyXML.h"
)

target_include_directories(tinyxml INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyXML"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tinyxml INTERFACE
    arduino-compat
)
