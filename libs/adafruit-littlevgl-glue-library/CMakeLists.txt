add_library(adafruit-littlevgl-glue-library INTERFACE)

target_sources(adafruit-littlevgl-glue-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LvGL_Glue/Adafruit_LvGL_Glue_SD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LvGL_Glue/Adafruit_LvGL_Glue.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LvGL_Glue/Adafruit_LvGL_Glue_SD.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LvGL_Glue/Adafruit_LvGL_Glue.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LvGL_Glue/lv_conf.h"
)

target_include_directories(adafruit-littlevgl-glue-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LvGL_Glue"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-littlevgl-glue-library INTERFACE
    arduino-compat
)
