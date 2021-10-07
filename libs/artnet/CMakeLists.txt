add_library(pac-artnet INTERFACE)

target_sources(pac-artnet INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArtNet/ArtnetEther.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArtNet/Artnet.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArtNet/ArtnetWiFi.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArtNet/Artnet/ArtnetCommon.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArtNet/Artnet/util/ArxTypeTraits/ArxTypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArtNet/Artnet/util/ArxTypeTraits/ArxTypeTraits/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArtNet/Artnet/util/ArxTypeTraits/ArxTypeTraits/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArtNet/Artnet/util/ArxTypeTraits/ArxTypeTraits/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArtNet/Artnet/util/ArxTypeTraits/ArxTypeTraits/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArtNet/Artnet/util/ArxTypeTraits/ArxTypeTraits/tuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArtNet/Artnet/util/ArxTypeTraits/ArxTypeTraits/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArtNet/Artnet/util/ArxTypeTraits/ArxTypeTraits/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArtNet/Artnet/util/TeensyDirtySTLErrorSolution/TeensyDirtySTLErrorSolution.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArtNet/Artnet/util/ArxContainer/ArxContainer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArtNet/Artnet/util/ArxContainer/ArxContainer/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArtNet/Artnet/util/ArxContainer/ArxContainer/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArtNet/Artnet/util/ArxContainer/ArxContainer/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArtNet/Artnet/util/ArxContainer/ArxContainer/has_libstdcplusplus.h"
)

target_include_directories(pac-artnet INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArtNet"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-artnet INTERFACE
    arduino-compat
)
