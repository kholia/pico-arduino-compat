add_library(neo-6m_gps INTERFACE)

target_sources(neo-6m_gps INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NEO-6M_GPS/src/neo6mGPS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NEO-6M_GPS/src/neo6mGPS.h"
)

target_include_directories(neo-6m_gps INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NEO-6M_GPS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(neo-6m_gps INTERFACE
    arduino-compat
)
