add_library(pac-ardubson INTERFACE)

target_sources(pac-ardubson INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ardubson/src/ardubsonObjBuilder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ardubson/src/ardubsonDocument.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ardubson/src/ardubsonObject.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ardubson/src/ardubsonStreamParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ardubson/src/ardubsonElement.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ardubson/src/IEEE754tools.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ardubson/src/ardubsonObjBuilder.h"
  "${CMAKE_CURRENT_LIST_DIR}/ardubson/src/ardubson.h"
  "${CMAKE_CURRENT_LIST_DIR}/ardubson/src/ardubsonTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/ardubson/src/ardubsonStreamParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/ardubson/src/IEEE754tools.h"
  "${CMAKE_CURRENT_LIST_DIR}/ardubson/src/ardubsonDocument.h"
  "${CMAKE_CURRENT_LIST_DIR}/ardubson/src/ardubsonConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/ardubson/src/ardubsonObject.h"
  "${CMAKE_CURRENT_LIST_DIR}/ardubson/src/ardubsonElement.h"
)

target_include_directories(pac-ardubson INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ardubson/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ardubson INTERFACE
    arduino-compat
)
