add_library(ktms1201 INTERFACE)

target_sources(ktms1201 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KTMS1201/src/KTMS1201.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KTMS1201/src/KTMS1201.h"
)

target_include_directories(ktms1201 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KTMS1201/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ktms1201 INTERFACE
    arduino-compat
)
