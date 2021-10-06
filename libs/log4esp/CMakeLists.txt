add_library(log4esp INTERFACE)

target_sources(log4esp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/log4Esp/src/Logger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/log4Esp/src/appender/SerialAppender.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/log4Esp/src/appender/Appender.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/log4Esp/src/appender/RollingFileAppender.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/log4Esp/src/Logger.h"
  "${CMAKE_CURRENT_LIST_DIR}/log4Esp/src/Log4Esp.h"
  "${CMAKE_CURRENT_LIST_DIR}/log4Esp/src/appender/RollingFileAppender.h"
  "${CMAKE_CURRENT_LIST_DIR}/log4Esp/src/appender/Appender.h"
  "${CMAKE_CURRENT_LIST_DIR}/log4Esp/src/appender/SerialAppender.h"
)

target_include_directories(log4esp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/log4Esp/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(log4esp INTERFACE
    arduino-compat
)
