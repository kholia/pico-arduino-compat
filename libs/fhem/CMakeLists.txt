add_library(fhem INTERFACE)

target_sources(fhem INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FHEM_Arduino/src/FHEM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FHEM_Arduino/src/FHEM.h"
)

target_include_directories(fhem INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FHEM_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fhem INTERFACE
    arduino-compat
)
