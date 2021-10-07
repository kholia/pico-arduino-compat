add_library(pac-pathvariablehandlers INTERFACE)

target_sources(pac-pathvariablehandlers INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/path_variable_handlers/test/test_url_token_bindings/test_url_token_bindings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/path_variable_handlers/test/test_token_iterator/test_token_iterator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/path_variable_handlers/src/UrlTokenBindings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/path_variable_handlers/src/TokenIterator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/path_variable_handlers/src/UrlTokenBindings.h"
  "${CMAKE_CURRENT_LIST_DIR}/path_variable_handlers/src/TokenIterator.h"
)

target_include_directories(pac-pathvariablehandlers INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/path_variable_handlers/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pathvariablehandlers INTERFACE
    arduino-compat
)
