add_library(asynctasklib INTERFACE)

target_sources(asynctasklib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncTask/src/AsyncTaskLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncTask/src/AsyncTaskLib.h"
)

target_include_directories(asynctasklib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncTask/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(asynctasklib INTERFACE
    arduino-compat
)
