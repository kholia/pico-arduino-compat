add_library(pac-easypcf8574 INTERFACE)

target_sources(pac-easypcf8574 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyPCF8574/src/EasyPCF8574.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyPCF8574/src/EasyPCF8574.h"
)

target_include_directories(pac-easypcf8574 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyPCF8574/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-easypcf8574 INTERFACE
    arduino-compat
)
