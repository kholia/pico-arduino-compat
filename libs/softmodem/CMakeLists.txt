add_library(softmodem INTERFACE)

target_sources(softmodem INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SoftModem/SoftModem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SoftModem/SoftModem.h"
)

target_include_directories(softmodem INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SoftModem"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(softmodem INTERFACE
    arduino-compat
)
