add_library(adns3080 INTERFACE)

target_sources(adns3080 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ADNS3080/src/ADNS3080.h"
)

target_include_directories(adns3080 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ADNS3080/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adns3080 INTERFACE
    arduino-compat
)
