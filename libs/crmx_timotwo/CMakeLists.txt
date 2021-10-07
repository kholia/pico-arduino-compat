add_library(pac-crmx_timotwo INTERFACE)

target_sources(pac-crmx_timotwo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CRMX_TimoTwo/src/CRMX_TimoTwo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRMX_TimoTwo/src/Globals.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRMX_TimoTwo/src/CRMX_TimoTwo.h"
)

target_include_directories(pac-crmx_timotwo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CRMX_TimoTwo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-crmx_timotwo INTERFACE
    arduino-compat
)
