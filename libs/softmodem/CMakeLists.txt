add_library(pac-softmodem INTERFACE)

target_sources(pac-softmodem INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SoftModem/SoftModem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SoftModem/SoftModem.h"
)

target_include_directories(pac-softmodem INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SoftModem"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-softmodem INTERFACE
    arduino-compat
)
