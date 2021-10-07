add_library(pac-magstripe INTERFACE)

target_sources(pac-magstripe INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/magstripelib/MagStripe.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/magstripelib/MagStripe.h"
)

target_include_directories(pac-magstripe INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/magstripelib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-magstripe INTERFACE
    arduino-compat
)
