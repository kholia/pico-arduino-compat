add_library(pac-thingspeak_asukiaaa INTERFACE)

target_sources(pac-thingspeak_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ThingSpeak_asukiaaa/src/ThingSpeakWriter_asukiaaa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ThingSpeak_asukiaaa/src/ThingSpeakWriter_asukiaaa.h"
)

target_include_directories(pac-thingspeak_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ThingSpeak_asukiaaa/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-thingspeak_asukiaaa INTERFACE
    arduino-compat
)
