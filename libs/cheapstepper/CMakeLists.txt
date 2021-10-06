add_library(cheapstepper INTERFACE)

target_sources(cheapstepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CheapStepper/CheapStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CheapStepper/CheapStepper.h"
)

target_include_directories(cheapstepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CheapStepper"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cheapstepper INTERFACE
    arduino-compat
)
