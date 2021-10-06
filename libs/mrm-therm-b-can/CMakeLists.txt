add_library(mrm-therm-b-can INTERFACE)

target_sources(mrm-therm-b-can INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-therm-b-can/src/mrm-therm-b-can.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-therm-b-can/src/mrm-therm-b-can.h"
)

target_include_directories(mrm-therm-b-can INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-therm-b-can/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mrm-therm-b-can INTERFACE
    arduino-compat
)
