add_library(adafruit-epd INTERFACE)

target_sources(adafruit-epd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/unsupported/Adafruit_IL0371.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/unsupported/Adafruit_IL3897.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/unsupported/Adafruit_IL0376F.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/Adafruit_MCPSRAM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/Adafruit_EPD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_SSD1619.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_ACeP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_SSD1675.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_EK79686.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_UC8276.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_SSD1608.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_SSD1680.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_IL0373.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_UC8151D.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_IL0398.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_SSD1675B.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_IL91874.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_SSD1681.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/unsupported/Adafruit_IL0376F.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/unsupported/Adafruit_IL0371.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/unsupported/Adafruit_IL3897.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/Adafruit_EPD.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/Adafruit_MCPSRAM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/Adafruit_ThinkInk.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_290_Grayscale4_T5.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_213_Mono_B73.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_290_Tricolor_RH.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_154_Tricolor_Z90.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_270_Tricolor_Z70.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_420_Mono_BN.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_420_Tricolor_Z21.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_270_Grayscale4_W3.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_213_Grayscale4_T5.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_290_Mono_M06.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_154_Mono_D67.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_290_Tricolor_Z13.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_420_Tricolor_RW.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_213_Mono_BN.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_213_Tricolor_RW.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_213_Mono_M21.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_154_Mono_M10.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_420_Grayscale4_T2.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_213_Tricolor_Z16.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_420_Mono_M06.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_154_Tricolor_Z17.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_154_Tricolor_RW.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_154_Grayscale4_T8.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_290_Mono_BN.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_290_Tricolor_Z10.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_270_Tricolor_C44.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_154_Mono_D27.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/panels/ThinkInk_213_Mono_B72.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_SSD1608.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_UC8151D.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_SSD1675.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_SSD1619.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_IL91874.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_EK79686.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_IL0398.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_ACeP.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_IL0373.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_SSD1680.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_UC8276.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_SSD1681.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src/drivers/Adafruit_SSD1675B.h"
)

target_include_directories(adafruit-epd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_EPD/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-epd INTERFACE
    arduino-compat
    adafruit-gfx-library
    adafruit-busio
)
