add_library(knock-detector INTERFACE)

target_sources(knock-detector INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-knock-detector/src/KnockPulse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-knock-detector/src/KnockAlgorithm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-knock-detector/src/KnockDetector.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-knock-detector/src/KnockPulse.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-knock-detector/src/KnockAlgorithm.h"
)

target_include_directories(knock-detector INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-knock-detector/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(knock-detector INTERFACE
    arduino-compat
)
