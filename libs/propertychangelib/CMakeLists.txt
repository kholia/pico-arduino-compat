add_library(pac-propertychangelib INTERFACE)

target_sources(pac-propertychangelib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-PropertyChange/src/PropertyChangeLib.h"
)

target_include_directories(pac-propertychangelib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-PropertyChange/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-propertychangelib INTERFACE
    arduino-compat
)
