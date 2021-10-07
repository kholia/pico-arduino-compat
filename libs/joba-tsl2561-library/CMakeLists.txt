add_library(pac-joba-tsl2561-library INTERFACE)

target_sources(pac-joba-tsl2561-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Joba_Tsl2561/src/Tsl2561.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Joba_Tsl2561/src/Tsl2561Util.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Joba_Tsl2561/src/Tsl2561Util.h"
  "${CMAKE_CURRENT_LIST_DIR}/Joba_Tsl2561/src/Tsl2561.h"
)

target_include_directories(pac-joba-tsl2561-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Joba_Tsl2561/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-joba-tsl2561-library INTERFACE
    arduino-compat
)
