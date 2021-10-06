add_library(softservo INTERFACE)

target_sources(softservo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SoftServo/src/SoftServo.h"
)

target_include_directories(softservo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SoftServo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(softservo INTERFACE
    arduino-compat
)
