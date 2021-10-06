add_library(jsmnstream INTERFACE)

target_sources(jsmnstream INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/JsmnStream/src/JsmnStream/JsmnStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JsmnStream/src/JsmnStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/JsmnStream/src/JsmnStream/JsmnStreamDefinitions.h"
)

target_include_directories(jsmnstream INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/JsmnStream/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(jsmnstream INTERFACE
    arduino-compat
)
