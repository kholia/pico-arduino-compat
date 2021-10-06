add_library(commandparser INTERFACE)

target_sources(commandparser INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-CommandParser/src/CommandParser.h"
)

target_include_directories(commandparser INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-CommandParser/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(commandparser INTERFACE
    arduino-compat
)
