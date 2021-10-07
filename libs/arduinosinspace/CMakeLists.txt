add_library(pac-arduinosinspace INTERFACE)

target_sources(pac-arduinosinspace INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduinosinspace/src/ArduinosInSpace.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinosinspace/src/AISRequest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinosinspace/src/AISManagedInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinosinspace/src/AISRequest.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinosinspace/src/ArduinosInSpaceRequests.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinosinspace/src/AISUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinosinspace/src/AISManagedInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduinosinspace/src/ArduinosInSpace.h"
)

target_include_directories(pac-arduinosinspace INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduinosinspace/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinosinspace INTERFACE
    arduino-compat
)
