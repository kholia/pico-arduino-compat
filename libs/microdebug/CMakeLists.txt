add_library(microdebug INTERFACE)

target_sources(microdebug INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MicroDebug/FormattingSerialDebug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MicroDebug/LedDebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/MicroDebug/FormattingSerialDebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/MicroDebug/SerialDebug.h"
)

target_include_directories(microdebug INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MicroDebug"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(microdebug INTERFACE
    arduino-compat
)
