add_library(ciao INTERFACE)

target_sources(ciao INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Ciao/src/Ciao.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ciao/src/CiaoData.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ciao/src/Ciao.h"
)

target_include_directories(ciao INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Ciao/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ciao INTERFACE
    arduino-compat
)
