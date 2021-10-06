add_library(pstring-arduino-lib INTERFACE)

target_sources(pstring-arduino-lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PString-Arduino-lib/PString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PString-Arduino-lib/PString.h"
)

target_include_directories(pstring-arduino-lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PString-Arduino-lib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pstring-arduino-lib INTERFACE
    arduino-compat
)
