add_library(pac-m2m-solutions-tlv-library INTERFACE)

target_sources(pac-m2m-solutions-tlv-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M2M_TLV/src/M2M_TLV.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M2M_TLV/src/M2M_TLV_ID.h"
  "${CMAKE_CURRENT_LIST_DIR}/M2M_TLV/src/M2M_TLV.h"
)

target_include_directories(pac-m2m-solutions-tlv-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M2M_TLV/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-m2m-solutions-tlv-library INTERFACE
    arduino-compat
)
