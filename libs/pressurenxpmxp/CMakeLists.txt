add_library(pressurenxpmxp INTERFACE)

target_sources(pressurenxpmxp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Pressure/Pressure.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pressure/Pressure.h"
)

target_include_directories(pressurenxpmxp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Pressure"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pressurenxpmxp INTERFACE
    arduino-compat
)
