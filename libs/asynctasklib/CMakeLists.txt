add_library(pac-asynctasklib INTERFACE)

target_sources(pac-asynctasklib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncTask/src/AsyncTaskLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncTask/src/AsyncTaskLib.h"
)

target_include_directories(pac-asynctasklib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncTask/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-asynctasklib INTERFACE
    arduino-compat
)
