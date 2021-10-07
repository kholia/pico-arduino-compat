add_library(pac-grove-coulomb-counter-for-3.3v-to-5v-ltc2941 INTERFACE)

target_sources(pac-grove-coulomb-counter-for-3.3v-to-5v-ltc2941 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_LTC2941/LTC2941.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_LTC2941/LTC2941.h"
)

target_include_directories(pac-grove-coulomb-counter-for-3.3v-to-5v-ltc2941 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Seeed_LTC2941"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-coulomb-counter-for-3.3v-to-5v-ltc2941 INTERFACE
    arduino-compat
)
