add_library(pac-smarteverything-sigfox-le51-868 INTERFACE)

target_sources(pac-smarteverything-sigfox-le51-868 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sme-le51-868-library/src/sigFox/SmeSFX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sme-le51-868-library/src/SmeSFX.h"
  "${CMAKE_CURRENT_LIST_DIR}/sme-le51-868-library/src/sigFox/smeSFXModel.h"
  "${CMAKE_CURRENT_LIST_DIR}/sme-le51-868-library/src/sigFox/smeErrorCode.h"
)

target_include_directories(pac-smarteverything-sigfox-le51-868 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sme-le51-868-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-smarteverything-sigfox-le51-868 INTERFACE
    arduino-compat
)
