add_library(pac-m2m-solutions-logger-library INTERFACE)

target_sources(pac-m2m-solutions-logger-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M2M_Logger/src/M2M_Logger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M2M_Logger/src/M2M_Logger.h"
)

target_include_directories(pac-m2m-solutions-logger-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M2M_Logger/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-m2m-solutions-logger-library INTERFACE
    arduino-compat
    pac-sd
)
