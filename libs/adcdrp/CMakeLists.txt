add_library(adcdrp INTERFACE)

target_sources(adcdrp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ADCDRP/ADCDRP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADCDRP/ADCDRP.h"
)

target_include_directories(adcdrp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ADCDRP"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adcdrp INTERFACE
    arduino-compat
)
