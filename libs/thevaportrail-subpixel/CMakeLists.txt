add_library(thevaportrail-subpixel INTERFACE)

target_sources(thevaportrail-subpixel INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TheVaporTrail_SubPixel/src/TheVaporTrail_SubPixel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TheVaporTrail_SubPixel/src/TheVaporTrail_SubPixel.h"
)

target_include_directories(thevaportrail-subpixel INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TheVaporTrail_SubPixel/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(thevaportrail-subpixel INTERFACE
    arduino-compat
)
