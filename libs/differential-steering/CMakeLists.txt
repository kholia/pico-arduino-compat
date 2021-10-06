add_library(differential-steering INTERFACE)

target_sources(differential-steering INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DifferentialSteering/DifferentialSteering.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DifferentialSteering/DifferentialSteering.h"
)

target_include_directories(differential-steering INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DifferentialSteering"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(differential-steering INTERFACE
    arduino-compat
)
