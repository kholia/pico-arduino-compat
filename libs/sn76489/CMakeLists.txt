add_library(sn76489 INTERFACE)

target_sources(sn76489 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sn76489/SN76489.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sn76489/SN76489.h"
  "${CMAKE_CURRENT_LIST_DIR}/sn76489/examples/SN76489_800XL_Like_SelfTest/Pitches.h"
)

target_include_directories(sn76489 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sn76489"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sn76489 INTERFACE
    arduino-compat
)
