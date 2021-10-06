add_library(charge-n-boost INTERFACE)

target_sources(charge-n-boost INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Charge-n-Boost/src/charge-n-boost.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Charge-n-Boost/src/charge-n-boost.h"
)

target_include_directories(charge-n-boost INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Charge-n-Boost/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(charge-n-boost INTERFACE
    arduino-compat
)
