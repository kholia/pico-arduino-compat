add_library(arduinoihc INTERFACE)

target_sources(arduinoihc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduinoihc/IHCOutput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoihc/IHCtemperature.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoihc/IHCInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoihc/IHCtemperature.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoihc/IHCInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoihc/IHCOutput.h"
)

target_include_directories(arduinoihc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduinoihc"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduinoihc INTERFACE
    arduino-compat
)
