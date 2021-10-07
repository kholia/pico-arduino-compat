add_library(pac-shox96-progmem-compression INTERFACE)

target_sources(pac-shox96-progmem-compression INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Shox96_Arduino_Progmem_lib/src/shox96_progmem_0_2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Shox96_Arduino_Progmem_lib/src/shox96_progmem_0_2.h"
  "${CMAKE_CURRENT_LIST_DIR}/Shox96_Arduino_Progmem_lib/examples/Proverbs/Proverbs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Shox96_Arduino_Progmem_lib/examples/Html/Html.h"
  "${CMAKE_CURRENT_LIST_DIR}/Shox96_Arduino_Progmem_lib/examples/Error_Messages/errno.h"
)

target_include_directories(pac-shox96-progmem-compression INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Shox96_Arduino_Progmem_lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-shox96-progmem-compression INTERFACE
    arduino-compat
)
