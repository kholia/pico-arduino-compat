add_library(dlxx416_arduino INTERFACE)

target_sources(dlxx416_arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DLxx416_Arduino/DLX3416.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DLxx416_Arduino/DLX2416.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DLxx416_Arduino/DLX3416.h"
  "${CMAKE_CURRENT_LIST_DIR}/DLxx416_Arduino/DLX2416.h"
)

target_include_directories(dlxx416_arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DLxx416_Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dlxx416_arduino INTERFACE
    arduino-compat
)
