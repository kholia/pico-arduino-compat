add_library(max3100-serial INTERFACE)

target_sources(max3100-serial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MAX3100Serial/src/MAX3100Serial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX3100Serial/src/MAX3100Serial.h"
)

target_include_directories(max3100-serial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MAX3100Serial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(max3100-serial INTERFACE
    arduino-compat
)
