add_library(pac-smarteverything-hts221 INTERFACE)

target_sources(pac-smarteverything-hts221 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sme-hts221-library/src/Humidity/HTS221.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sme-hts221-library/src/HTS221.h"
  "${CMAKE_CURRENT_LIST_DIR}/sme-hts221-library/src/Humidity/HTS221Reg.h"
)

target_include_directories(pac-smarteverything-hts221 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sme-hts221-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-smarteverything-hts221 INTERFACE
    arduino-compat
)
