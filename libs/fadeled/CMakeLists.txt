add_library(fadeled INTERFACE)

target_sources(fadeled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FadeLed/src/FadeLed.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FadeLed/src/FadeLed.h"
  "${CMAKE_CURRENT_LIST_DIR}/FadeLed/src/FadeLedGamma.h"
)

target_include_directories(fadeled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FadeLed/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fadeled INTERFACE
    arduino-compat
)
