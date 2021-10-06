add_library(radioengelorawan INTERFACE)

target_sources(radioengelorawan INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/end-device-radioenge/src/RadioengeLoraWAN.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/end-device-radioenge/examples/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/end-device-radioenge/src/RadioengeLoraWAN.h"
)

target_include_directories(radioengelorawan INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/end-device-radioenge/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(radioengelorawan INTERFACE
    arduino-compat
)
