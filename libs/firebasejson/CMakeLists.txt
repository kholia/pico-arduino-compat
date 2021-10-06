add_library(firebasejson INTERFACE)

target_sources(firebasejson INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FirebaseJson/src/FirebaseJson.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FirebaseJson/src/cJSON/cJSON_Utils.c"
  "${CMAKE_CURRENT_LIST_DIR}/FirebaseJson/src/cJSON/cJSON.c"
  "${CMAKE_CURRENT_LIST_DIR}/FirebaseJson/src/FirebaseJson.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirebaseJson/src/cJSON/cJSON.h"
  "${CMAKE_CURRENT_LIST_DIR}/FirebaseJson/src/cJSON/cJSON_Utils.h"
)

target_include_directories(firebasejson INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FirebaseJson/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(firebasejson INTERFACE
    arduino-compat
)
