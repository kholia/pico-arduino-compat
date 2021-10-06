add_library(esp32-rest-client INTERFACE)

target_sources(esp32-rest-client INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-esp32-restclient/RestClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-esp32-restclient/RestClient.h"
)

target_include_directories(esp32-rest-client INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-esp32-restclient"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp32-rest-client INTERFACE
    arduino-compat
)
