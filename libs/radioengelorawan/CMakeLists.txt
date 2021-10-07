add_library(pac-radioengelorawan INTERFACE)

target_sources(pac-radioengelorawan INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/end-device-radioenge/src/RadioengeLoraWAN.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/end-device-radioenge/examples/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/end-device-radioenge/src/RadioengeLoraWAN.h"
)

target_include_directories(pac-radioengelorawan INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/end-device-radioenge/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-radioengelorawan INTERFACE
    arduino-compat
)
