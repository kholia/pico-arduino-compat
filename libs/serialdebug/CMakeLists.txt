add_library(pac-serialdebug INTERFACE)

target_sources(pac-serialdebug INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialDebug/src/SerialDebug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialDebug/src/utility/Util.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialDebug/src/utility/Fields.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialDebug/src/SerialDebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialDebug/src/utility/Boards.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialDebug/src/utility/Vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialDebug/src/utility/Util.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialDebug/src/utility/Fields.h"
)

target_include_directories(pac-serialdebug INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialDebug/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-serialdebug INTERFACE
    arduino-compat
)
