add_library(m2m-solutions-logger-library INTERFACE)

target_sources(m2m-solutions-logger-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M2M_Logger/src/M2M_Logger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M2M_Logger/src/M2M_Logger.h"
)

target_include_directories(m2m-solutions-logger-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M2M_Logger/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(m2m-solutions-logger-library INTERFACE
    arduino-compat
    official-sd
)
