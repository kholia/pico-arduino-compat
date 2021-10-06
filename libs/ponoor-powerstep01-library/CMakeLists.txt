add_library(ponoor-powerstep01-library INTERFACE)

target_sources(ponoor-powerstep01-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Ponoor_PowerSTEP01_Library/src/Ponoor_PowerSTEP01LibraryCommands.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ponoor_PowerSTEP01_Library/src/Ponoor_PowerSTEP01LibraryConfig.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ponoor_PowerSTEP01_Library/src/Ponoor_PowerSTEP01LibrarySupport.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ponoor_PowerSTEP01_Library/src/Ponoor_PowerSTEP01Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ponoor_PowerSTEP01_Library/src/Ponoor_PowerSTEP01SPINConstants.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ponoor_PowerSTEP01_Library/src/Ponoor_PowerSTEP01Library.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ponoor_PowerSTEP01_Library/src/Ponoor_PowerSTEP01ConfigurationStructures.h"
)

target_include_directories(ponoor-powerstep01-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Ponoor_PowerSTEP01_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ponoor-powerstep01-library INTERFACE
    arduino-compat
)
