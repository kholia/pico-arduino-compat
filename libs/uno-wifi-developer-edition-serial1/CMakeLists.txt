add_library(pac-uno-wifi-developer-edition-serial1 INTERFACE)

target_sources(pac-uno-wifi-developer-edition-serial1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UnoWiFiDevEdSerial1/src/UnoWiFiDevEdSerial1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UnoWiFiDevEdSerial1/src/UnoWiFiDevEdSerial1.h"
)

target_include_directories(pac-uno-wifi-developer-edition-serial1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UnoWiFiDevEdSerial1/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-uno-wifi-developer-edition-serial1 INTERFACE
    arduino-compat
)
