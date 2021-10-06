add_library(virtuinocm INTERFACE)

target_sources(virtuinocm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/virtuinoCM/VirtuinoCM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtuinoCM/VirtuinoCM.h"
)

target_include_directories(virtuinocm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/virtuinoCM"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(virtuinocm INTERFACE
    arduino-compat
)
