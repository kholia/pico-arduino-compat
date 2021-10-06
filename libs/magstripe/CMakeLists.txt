add_library(magstripe INTERFACE)

target_sources(magstripe INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/magstripelib/MagStripe.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/magstripelib/MagStripe.h"
)

target_include_directories(magstripe INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/magstripelib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(magstripe INTERFACE
    arduino-compat
)
