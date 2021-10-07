add_library(pac-max1464-arduino-library INTERFACE)

target_sources(pac-max1464-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MAX1464-Arduino-library/src/MAX1464_SS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX1464-Arduino-library/src/MAX1464.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX1464-Arduino-library/src/lib/printhex.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX1464-Arduino-library/src/lib/AbstractMAX1464.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX1464-Arduino-library/src/MAX1464.h"
  "${CMAKE_CURRENT_LIST_DIR}/MAX1464-Arduino-library/src/MAX1464_SS.h"
  "${CMAKE_CURRENT_LIST_DIR}/MAX1464-Arduino-library/src/lib/AbstractMAX1464.h"
  "${CMAKE_CURRENT_LIST_DIR}/MAX1464-Arduino-library/src/lib/printhex.h"
  "${CMAKE_CURRENT_LIST_DIR}/MAX1464-Arduino-library/src/lib/MAX1464_enums.h"
)

target_include_directories(pac-max1464-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MAX1464-Arduino-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-max1464-arduino-library INTERFACE
    arduino-compat
)
