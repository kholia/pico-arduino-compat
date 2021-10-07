add_library(pac-tr-064-soap-library INTERFACE)

target_sources(pac-tr-064-soap-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-TR-064-SOAP-Library/src/tr064.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-TR-064-SOAP-Library/src/tr064.h"
)

target_include_directories(pac-tr-064-soap-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-TR-064-SOAP-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tr-064-soap-library INTERFACE
    arduino-compat
)
