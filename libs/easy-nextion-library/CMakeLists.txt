add_library(easy-nextion-library INTERFACE)

target_sources(easy-nextion-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyNextionLibrary/src/EasyNextionLibrary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyNextionLibrary/src/callTriggers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyNextionLibrary/src/readCustomCommands.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyNextionLibrary/src/EasyNextionLibrary.h"
  "${CMAKE_CURRENT_LIST_DIR}/EasyNextionLibrary/src/trigger.h"
)

target_include_directories(easy-nextion-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyNextionLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(easy-nextion-library INTERFACE
    arduino-compat
)
