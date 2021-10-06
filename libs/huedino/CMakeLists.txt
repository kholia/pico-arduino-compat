add_library(huedino INTERFACE)

target_sources(huedino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/hueDino/src/hueDino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hueDino/src/include/RestClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hueDino/src/hueDino.h"
  "${CMAKE_CURRENT_LIST_DIR}/hueDino/src/include/RestClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/hueDino/examples/BCdimmerSwitch/Compiler_Errors.h"
)

target_include_directories(huedino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/hueDino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(huedino INTERFACE
    arduino-compat
)
