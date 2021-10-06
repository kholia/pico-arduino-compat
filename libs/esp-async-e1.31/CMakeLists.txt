add_library(esp-async-e1.31 INTERFACE)

target_sources(esp-async-e1.31 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsyncE131/ESPAsyncE131.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsyncE131/RingBuf.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsyncE131/RingBuf.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPAsyncE131/ESPAsyncE131.h"
)

target_include_directories(esp-async-e1.31 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPAsyncE131"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp-async-e1.31 INTERFACE
    arduino-compat
)
