add_library(pac-tinyxml INTERFACE)

target_sources(pac-tinyxml INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyXML/TinyXML.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyXML/TinyXMLTable.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyXML/TinyXML.h"
)

target_include_directories(pac-tinyxml INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyXML"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinyxml INTERFACE
    arduino-compat
)
