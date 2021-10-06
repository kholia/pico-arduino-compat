add_library(onetime-bh1750 INTERFACE)

target_sources(onetime-bh1750 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OneTime-BH1750/src/BH1750.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneTime-BH1750/src/BH1750.h"
)

target_include_directories(onetime-bh1750 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OneTime-BH1750/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(onetime-bh1750 INTERFACE
    arduino-compat
)
