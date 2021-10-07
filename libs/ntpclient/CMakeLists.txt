add_library(pac-ntpclient INTERFACE)

target_sources(pac-ntpclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NTPClient/NTPClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NTPClient/NTPClient.h"
)

target_include_directories(pac-ntpclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NTPClient"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ntpclient INTERFACE
    arduino-compat
)
