add_library(pac-doubleresetdetect INTERFACE)

target_sources(pac-doubleresetdetect INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DoubleResetDetect/src/DoubleResetDetect.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DoubleResetDetect/src/DoubleResetDetect.h"
)

target_include_directories(pac-doubleresetdetect INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DoubleResetDetect/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-doubleresetdetect INTERFACE
    arduino-compat
)
