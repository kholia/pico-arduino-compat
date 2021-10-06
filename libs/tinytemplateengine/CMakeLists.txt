add_library(tinytemplateengine INTERFACE)

target_sources(tinytemplateengine INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/tiny-template-engine-arduino/src/TinyTemplateEngine.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tiny-template-engine-arduino/src/TinyTemplateEngineMemoryReader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tiny-template-engine-arduino/src/TinyTemplateEngine.h"
  "${CMAKE_CURRENT_LIST_DIR}/tiny-template-engine-arduino/src/TinyTemplateEngineMemoryReader.h"
)

target_include_directories(tinytemplateengine INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/tiny-template-engine-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tinytemplateengine INTERFACE
    arduino-compat
)
