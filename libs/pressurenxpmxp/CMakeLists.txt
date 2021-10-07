add_library(pac-pressurenxpmxp INTERFACE)

target_sources(pac-pressurenxpmxp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Pressure/Pressure.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pressure/Pressure.h"
)

target_include_directories(pac-pressurenxpmxp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Pressure"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pressurenxpmxp INTERFACE
    arduino-compat
)
