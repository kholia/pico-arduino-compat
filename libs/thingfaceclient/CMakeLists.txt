add_library(pac-thingfaceclient INTERFACE)

target_sources(pac-thingfaceclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino/src/ThingfaceClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/src/ThingfaceClient.h"
)

target_include_directories(pac-thingfaceclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-thingfaceclient INTERFACE
    arduino-compat
)
