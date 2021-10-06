add_library(telit-ge910-gsm-library INTERFACE)

target_sources(telit-ge910-gsm-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GE910/src/GE910.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GE910/src/GE910.h"
)

target_include_directories(telit-ge910-gsm-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GE910/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(telit-ge910-gsm-library INTERFACE
    arduino-compat
)
