add_library(pac-unishox-progmem-decompressor INTERFACE)

target_sources(pac-unishox-progmem-decompressor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Unishox_Arduino_Progmem_lib/src/unishox1_progmem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Unishox_Arduino_Progmem_lib/src/unishox1_progmem.h"
  "${CMAKE_CURRENT_LIST_DIR}/Unishox_Arduino_Progmem_lib/examples/Proverbs/Proverbs_Uni.h"
)

target_include_directories(pac-unishox-progmem-decompressor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Unishox_Arduino_Progmem_lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-unishox-progmem-decompressor INTERFACE
    arduino-compat
)
