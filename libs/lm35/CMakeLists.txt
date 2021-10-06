add_library(lm35 INTERFACE)

target_sources(lm35 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LM35/LM35.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LM35/LM35.h"
)

target_include_directories(lm35 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LM35"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lm35 INTERFACE
    arduino-compat
)
