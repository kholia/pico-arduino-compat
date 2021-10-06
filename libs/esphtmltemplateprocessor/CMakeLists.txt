add_library(esphtmltemplateprocessor INTERFACE)

target_sources(esphtmltemplateprocessor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EspHtmlTemplateProcessor/src/EspHtmlTemplateProcessor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspHtmlTemplateProcessor/src/EspHtmlTemplateProcessor.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspHtmlTemplateProcessor/src/FileReader.h"
)

target_include_directories(esphtmltemplateprocessor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EspHtmlTemplateProcessor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esphtmltemplateprocessor INTERFACE
    arduino-compat
)
