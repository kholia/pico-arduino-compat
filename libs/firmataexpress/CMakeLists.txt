add_library(pac-firmataexpress INTERFACE)

target_sources(pac-firmataexpress INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FirmataExpress/FirmataParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataExpress/FirmataExpress.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataExpress/FirmataMarshaller.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataExpress/FirmataConstants.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataExpress/FirmataParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataExpress/FirmataExpress.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataExpress/Boards.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataExpress/FirmataDefines.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirmataExpress/FirmataMarshaller.h"
)

target_include_directories(pac-firmataexpress INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FirmataExpress"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-firmataexpress INTERFACE
    arduino-compat
)
