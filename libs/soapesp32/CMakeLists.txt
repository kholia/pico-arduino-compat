add_library(soapesp32 INTERFACE)

target_sources(soapesp32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SoapESP32/src/MiniXPath.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SoapESP32/src/SoapESP32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SoapESP32/src/SoapESP32.h"
  "${CMAKE_CURRENT_LIST_DIR}/SoapESP32/src/MiniXPath.h"
)

target_include_directories(soapesp32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SoapESP32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(soapesp32 INTERFACE
    arduino-compat
)
