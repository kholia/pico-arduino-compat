add_library(pac-linearregression INTERFACE)

target_sources(pac-linearregression INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LinearRegression/src/LinearRegression.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LinearRegression/src/LinearRegression.h"
)

target_include_directories(pac-linearregression INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LinearRegression/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-linearregression INTERFACE
    arduino-compat
)
