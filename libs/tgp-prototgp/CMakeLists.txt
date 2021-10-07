add_library(pac-tgp-prototgp INTERFACE)

target_sources(pac-tgp-prototgp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TGP_ProtoTGP/ProtoTGP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_ProtoTGP/ProtoTGP.h"
)

target_include_directories(pac-tgp-prototgp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TGP_ProtoTGP"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tgp-prototgp INTERFACE
    arduino-compat
)
