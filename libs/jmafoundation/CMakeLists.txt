add_library(jmafoundation INTERFACE)

target_sources(jmafoundation INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/JMAFoundation/examples/JMAFoundation/eventObject.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JMAFoundation/JMAEvent.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMAFoundation/JMATypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMAFoundation/JMAFoundation.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMAFoundation/examples/JMAFoundation/eventObject.h"
)

target_include_directories(jmafoundation INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/JMAFoundation"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(jmafoundation INTERFACE
    arduino-compat
)
