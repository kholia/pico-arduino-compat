add_library(pac-adeon INTERFACE)

target_sources(pac-adeon INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adeon/src/AdeonGSM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adeon/src/utility/list.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adeon/src/utility/MD5.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adeon/src/utility/SIMlib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adeon/doc/Adeon_DoxygenMainPage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adeon/src/AdeonGSM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adeon/src/utility/SIMlib.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adeon/src/utility/MD5.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adeon/src/utility/list.h"
)

target_include_directories(pac-adeon INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adeon/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adeon INTERFACE
    arduino-compat
)
