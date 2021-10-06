add_library(youmadeit INTERFACE)

target_sources(youmadeit INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/youmadeit-arduino/src/YouMadeIt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/youmadeit-arduino/src/YMIPubSubClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/youmadeit-arduino/src/YouMadeIt.h"
  "${CMAKE_CURRENT_LIST_DIR}/youmadeit-arduino/src/YMIPubSubClient.h"
)

target_include_directories(youmadeit INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/youmadeit-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(youmadeit INTERFACE
    arduino-compat
)
