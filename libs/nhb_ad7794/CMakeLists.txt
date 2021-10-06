add_library(nhb_ad7794 INTERFACE)

target_sources(nhb_ad7794 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NHB_AD7794/src/NHB_AD7794.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NHB_AD7794/src/NHB_AD7794.h"
)

target_include_directories(nhb_ad7794 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NHB_AD7794/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nhb_ad7794 INTERFACE
    arduino-compat
)
