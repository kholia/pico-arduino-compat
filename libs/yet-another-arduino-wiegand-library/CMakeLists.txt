add_library(pac-yet-another-arduino-wiegand-library INTERFACE)

target_sources(pac-yet-another-arduino-wiegand-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/YetAnotherArduinoWiegandLibrary/src/Wiegand.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/YetAnotherArduinoWiegandLibrary/src/Wiegand.h"
)

target_include_directories(pac-yet-another-arduino-wiegand-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/YetAnotherArduinoWiegandLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-yet-another-arduino-wiegand-library INTERFACE
    arduino-compat
)
