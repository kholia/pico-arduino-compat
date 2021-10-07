add_library(pac-esphtmltemplateprocessor INTERFACE)

target_sources(pac-esphtmltemplateprocessor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EspHtmlTemplateProcessor/src/EspHtmlTemplateProcessor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspHtmlTemplateProcessor/src/EspHtmlTemplateProcessor.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspHtmlTemplateProcessor/src/FileReader.h"
)

target_include_directories(pac-esphtmltemplateprocessor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EspHtmlTemplateProcessor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esphtmltemplateprocessor INTERFACE
    arduino-compat
)
