add_library(acan2517 INTERFACE)

target_sources(acan2517 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/acan2517/src/ACAN2517.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/acan2517/src/ACAN2517Settings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/acan2517/src/ACAN2517Filters.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan2517/src/ACAN2517Settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan2517/src/ACAN2517.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan2517/src/ACANBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan2517/src/CANMessage.h"
)

target_include_directories(acan2517 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/acan2517/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(acan2517 INTERFACE
    arduino-compat
)
