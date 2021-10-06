add_library(mq7sensor INTERFACE)

target_sources(mq7sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MQ7/src/MQ7.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MQ7/src/MQ7.h"
)

target_include_directories(mq7sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MQ7/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mq7sensor INTERFACE
    arduino-compat
)
