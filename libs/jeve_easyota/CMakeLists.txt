add_library(pac-jeve_easyota INTERFACE)

target_sources(pac-jeve_easyota INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/JeVe_EasyOTA/src/JeVe_EasyOTA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JeVe_EasyOTA/src/JeVe_EasyOTA.h"
)

target_include_directories(pac-jeve_easyota INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/JeVe_EasyOTA/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-jeve_easyota INTERFACE
    arduino-compat
)
