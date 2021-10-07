add_library(pac-tcm2lib INTERFACE)

target_sources(pac-tcm2lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-TCM2/src/TCM2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-TCM2/src/TCM2_regs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-TCM2/src/TCM2.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-TCM2/examples/image_upload/test_image.h"
)

target_include_directories(pac-tcm2lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-TCM2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tcm2lib INTERFACE
    arduino-compat
)
