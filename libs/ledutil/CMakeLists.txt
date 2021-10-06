add_library(ledutil INTERFACE)

target_sources(ledutil INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LedUtil/src/LedUtil.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedUtil/src/LedUtil.h"
)

target_include_directories(ledutil INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LedUtil/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ledutil INTERFACE
    arduino-compat
)
