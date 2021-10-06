add_library(doubleresetdetect INTERFACE)

target_sources(doubleresetdetect INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DoubleResetDetect/src/DoubleResetDetect.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DoubleResetDetect/src/DoubleResetDetect.h"
)

target_include_directories(doubleresetdetect INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DoubleResetDetect/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(doubleresetdetect INTERFACE
    arduino-compat
)
