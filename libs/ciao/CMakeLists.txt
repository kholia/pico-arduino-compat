add_library(pac-ciao INTERFACE)

target_sources(pac-ciao INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Ciao/src/Ciao.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ciao/src/CiaoData.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ciao/src/Ciao.h"
)

target_include_directories(pac-ciao INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Ciao/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ciao INTERFACE
    arduino-compat
)
