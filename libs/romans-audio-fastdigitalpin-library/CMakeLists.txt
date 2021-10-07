add_library(pac-romans-audio-fastdigitalpin-library INTERFACE)

target_sources(pac-romans-audio-fastdigitalpin-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FastDigitalPin/FastDigitalPin.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastDigitalPin/FastDigitalPin.h"
)

target_include_directories(pac-romans-audio-fastdigitalpin-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FastDigitalPin"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-romans-audio-fastdigitalpin-library INTERFACE
    arduino-compat
)
