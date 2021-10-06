add_library(protocentral-pulse-express-spo2-heartrate-and-bpt-sensor INTERFACE)

target_sources(protocentral-pulse-express-spo2-heartrate-and-bpt-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/protocentral-pulse-express/src/max32664.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral-pulse-express/src/max32664.h"
)

target_include_directories(protocentral-pulse-express-spo2-heartrate-and-bpt-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/protocentral-pulse-express/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(protocentral-pulse-express-spo2-heartrate-and-bpt-sensor INTERFACE
    arduino-compat
)
