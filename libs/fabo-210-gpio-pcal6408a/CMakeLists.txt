add_library(pac-fabo-210-gpio-pcal6408a INTERFACE)

target_sources(pac-fabo-210-gpio-pcal6408a INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBoGPIO-PCAL6408-Library/src/FaBoGPIO_PCAL6408.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoGPIO-PCAL6408-Library/src/FaBoGPIO_PCAL6408.h"
)

target_include_directories(pac-fabo-210-gpio-pcal6408a INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBoGPIO-PCAL6408-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fabo-210-gpio-pcal6408a INTERFACE
    arduino-compat
)
