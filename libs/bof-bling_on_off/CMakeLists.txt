add_library(bof-bling_on_off INTERFACE)

target_sources(bof-bling_on_off INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BOF/src/BOF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BOF/src/BOF.h"
)

target_include_directories(bof-bling_on_off INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BOF/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bof-bling_on_off INTERFACE
    arduino-compat
)
