add_library(dictionary INTERFACE)

target_sources(dictionary INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Dictionary/src/BufferStream/ReadBufferStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dictionary/src/BufferStream/BaseBufferStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dictionary/src/BufferStream/WriteBufferStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dictionary/src/shoco/shoco.c"
  "${CMAKE_CURRENT_LIST_DIR}/Dictionary/src/smaz/smaz.c"
  "${CMAKE_CURRENT_LIST_DIR}/Dictionary/src/Dictionary.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dictionary/src/NodeArray.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dictionary/src/shoco/shoco_model.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dictionary/src/shoco/shoco.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dictionary/src/shoco/models/shoco_model_words_en.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dictionary/src/shoco/models/shoco_model_filepaths.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dictionary/src/shoco/models/shoco_model_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dictionary/src/shoco/models/shoco_model_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dictionary/src/shoco/models/shoco_model_dictionary.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dictionary/src/shoco/models/shoco_model_text_en.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dictionary/src/BufferStream/WriteBufferStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dictionary/src/BufferStream/BufferStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dictionary/src/BufferStream/BaseBufferStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dictionary/src/BufferStream/ReadBufferStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dictionary/src/smaz/smaz.h"
)

target_include_directories(dictionary INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Dictionary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dictionary INTERFACE
    arduino-compat
)
