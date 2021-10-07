add_library(pac-fttech-samd51-clicks INTERFACE)

target_sources(pac-fttech-samd51-clicks INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FTTech_SAMD51_Clicks/src/FTTech_SAMD51_Clicks.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FTTech_SAMD51_Clicks/src/MAX31875/MAX31875.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FTTech_SAMD51_Clicks/src/FTTech_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/FTTech_SAMD51_Clicks/src/FTTech_SAMD51_Clicks.h"
  "${CMAKE_CURRENT_LIST_DIR}/FTTech_SAMD51_Clicks/src/FTTech_SAMD51Clicks.h"
  "${CMAKE_CURRENT_LIST_DIR}/FTTech_SAMD51_Clicks/src/MAX31875/MAX31875.h"
)

target_include_directories(pac-fttech-samd51-clicks INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FTTech_SAMD51_Clicks/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fttech-samd51-clicks INTERFACE
    arduino-compat
)
