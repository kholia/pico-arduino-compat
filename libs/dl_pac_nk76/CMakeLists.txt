add_library(dl_pac_nk76 INTERFACE)

target_sources(dl_pac_nk76 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DL_PAC_NK76/src/DL_PAC_NK76.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DL_PAC_NK76/src/DL_PAC_NK76.h"
)

target_include_directories(dl_pac_nk76 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DL_PAC_NK76/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dl_pac_nk76 INTERFACE
    arduino-compat
)
