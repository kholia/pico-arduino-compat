add_library(pac-thevaportrail-subpixel INTERFACE)

target_sources(pac-thevaportrail-subpixel INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TheVaporTrail_SubPixel/src/TheVaporTrail_SubPixel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TheVaporTrail_SubPixel/src/TheVaporTrail_SubPixel.h"
)

target_include_directories(pac-thevaportrail-subpixel INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TheVaporTrail_SubPixel/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-thevaportrail-subpixel INTERFACE
    arduino-compat
)
