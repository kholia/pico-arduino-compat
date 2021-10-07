add_library(pac-printex INTERFACE)

target_sources(pac-printex INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/lib/PrintExtension.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/lib/StreamExtension.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/lib/MemoryPrinter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/tools/CRCStream/CRCStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/tools/Base64Encoder/Base64Encoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/tools/URIEncoder/URIEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/PrintEx.h"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/lib/PrintExtension.h"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/lib/TypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/lib/NonStreamingIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/lib/Globals.h"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/lib/PrintRepeat.h"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/lib/PrintConcat.h"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/lib/MemoryPrinter.h"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/lib/StreamExtension.h"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/lib/OStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/lib/IStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/lib/PrintVariadic.h"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/tools/PrintAdapter.h"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/tools/RxTxCounter.h"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/tools/BufferedPrinter.h"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/tools/NullStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/tools/DualPrinter.h"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/tools/CRCStream/CRCStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/tools/Base64Encoder/Base64Encoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src/tools/URIEncoder/URIEncoder.h"
)

target_include_directories(pac-printex INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PrintEx/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-printex INTERFACE
    arduino-compat
)
