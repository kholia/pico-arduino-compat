add_library(esp32fota INTERFACE)

target_sources(esp32fota INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp32FOTA/src/esp32fota.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32FOTA/tests/test_http/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32FOTA/tests/test_https/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32FOTA/src/esp32fota.h"
)

target_include_directories(esp32fota INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp32FOTA/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp32fota INTERFACE
    arduino-compat
)
