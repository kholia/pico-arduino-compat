add_library(pac-fttech-samd51-xbee INTERFACE)

target_sources(pac-fttech-samd51-xbee INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FTTech_XBee/src/FTTech_Xbee.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FTTech_XBee/src/FTTech_Xbee.h"
  "${CMAKE_CURRENT_LIST_DIR}/FTTech_XBee/src/utility/logging.h"
)

target_include_directories(pac-fttech-samd51-xbee INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FTTech_XBee/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fttech-samd51-xbee INTERFACE
    arduino-compat
)
