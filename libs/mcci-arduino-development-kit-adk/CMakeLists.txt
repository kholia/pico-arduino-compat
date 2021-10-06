add_library(mcci-arduino-development-kit-adk INTERFACE)

target_sources(mcci-arduino-development-kit-adk INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Catena-mcciadk/src/lib/mcciadklib_buffertoulong.c"
  "${CMAKE_CURRENT_LIST_DIR}/Catena-mcciadk/src/lib/mcciadklib_multiszindex.c"
  "${CMAKE_CURRENT_LIST_DIR}/Catena-mcciadk/src/lib/mcciadklib_safecopystring.c"
  "${CMAKE_CURRENT_LIST_DIR}/Catena-mcciadk/src/lib/mcciadklib_formatdumpline.c"
  "${CMAKE_CURRENT_LIST_DIR}/Catena-mcciadk/src/lib/mcciadklib_snprintf.c"
  "${CMAKE_CURRENT_LIST_DIR}/Catena-mcciadk/src/lib/mcciadklib_stringcomparecaseinsensitive.c"
  "${CMAKE_CURRENT_LIST_DIR}/Catena-mcciadk/src/mcciadk_env.h"
  "${CMAKE_CURRENT_LIST_DIR}/Catena-mcciadk/src/mcciadk_baselib.h"
  "${CMAKE_CURRENT_LIST_DIR}/Catena-mcciadk/src/mcciadk_guid.h"
)

target_include_directories(mcci-arduino-development-kit-adk INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Catena-mcciadk/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mcci-arduino-development-kit-adk INTERFACE
    arduino-compat
)
