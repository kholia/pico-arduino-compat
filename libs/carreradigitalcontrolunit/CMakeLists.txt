add_library(carreradigitalcontrolunit INTERFACE)

target_sources(carreradigitalcontrolunit INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CarreraDigitalControlUnit/src/CarreraDigitalControlUnit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CarreraDigitalControlUnit/examples/LapCounter/LapCounter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CarreraDigitalControlUnit/examples/StartLight/StartLight.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CarreraDigitalControlUnit/examples/DataLogger/DataLogger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CarreraDigitalControlUnit/examples/CommandSniffer/CommandSniffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CarreraDigitalControlUnit/src/CarreraDigitalControlUnit.h"
)

target_include_directories(carreradigitalcontrolunit INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CarreraDigitalControlUnit/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(carreradigitalcontrolunit INTERFACE
    arduino-compat
)
