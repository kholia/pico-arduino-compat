add_library(linearregression INTERFACE)

target_sources(linearregression INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LinearRegression/src/LinearRegression.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LinearRegression/src/LinearRegression.h"
)

target_include_directories(linearregression INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LinearRegression/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(linearregression INTERFACE
    arduino-compat
)
