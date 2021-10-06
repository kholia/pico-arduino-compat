add_library(spimemory INTERFACE)

target_sources(spimemory INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SPIMemory/extras/DMASAMD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SPIMemory/src/diagnostics.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SPIMemory/src/SPIFlash.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SPIMemory/src/SPIFlashSFDP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SPIMemory/src/SPIMemory.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SPIMemory/src/SPIFlashIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SPIMemory/src/DMASAM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SPIMemory/src/SPIFram.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SPIMemory/src/SPIFramIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SPIMemory/src/SPIFram.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPIMemory/src/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPIMemory/src/DMASAM.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPIMemory/src/SPIMemory.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPIMemory/src/DMASAMD.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPIMemory/src/diagnostics.h"
  "${CMAKE_CURRENT_LIST_DIR}/SPIMemory/src/SPIFlash.h"
)

target_include_directories(spimemory INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SPIMemory/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(spimemory INTERFACE
    arduino-compat
)
