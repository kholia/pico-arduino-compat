add_library(ds1307newalarms INTERFACE)

target_sources(ds1307newalarms INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DS1307newAlarms/DS1307new.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DS1307newAlarms/DS1307new.h"
)

target_include_directories(ds1307newalarms INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DS1307newAlarms"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ds1307newalarms INTERFACE
    arduino-compat
)
