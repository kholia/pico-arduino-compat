add_library(ntpclientlib INTERFACE)

target_sources(ntpclientlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NtpClient/src/NTPClientLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NtpClient/src/NtpClientLib.h"
  "${CMAKE_CURRENT_LIST_DIR}/NtpClient/examples/NTPClientESP8266/WifiConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/NtpClient/examples/NTPClientMKR1000/WifiConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/NtpClient/examples/NTPClientESP32/WifiConfig.h"
)

target_include_directories(ntpclientlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NtpClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ntpclientlib INTERFACE
    arduino-compat
)
