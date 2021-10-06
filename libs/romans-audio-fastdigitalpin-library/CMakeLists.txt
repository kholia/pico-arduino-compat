add_library(romans-audio-fastdigitalpin-library INTERFACE)

target_sources(romans-audio-fastdigitalpin-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FastDigitalPin/FastDigitalPin.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastDigitalPin/FastDigitalPin.h"
)

target_include_directories(romans-audio-fastdigitalpin-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FastDigitalPin"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(romans-audio-fastdigitalpin-library INTERFACE
    arduino-compat
)
