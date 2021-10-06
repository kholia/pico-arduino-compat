add_library(grove-infrared-receiver-and-emitter INTERFACE)

target_sources(grove-infrared-receiver-and-emitter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/ir_Denon.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/ir_Panasonic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/ir_Aiwa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/ir_NEC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/ir_Sanyo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/ir_JVC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/ir_Template.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/ir_BoseWave.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/irSend.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/ir_RC5_RC6.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/esp32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/ir_Mitsubishi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/IRremote.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/irPronto.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/ir_Lego_PF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/ir_Sharp_alt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/irRecv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/ir_Whynter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/ir_Sony.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/ir_Dish.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/ir_Samsung.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/ir_MagiQuest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/ir_Sharp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/ir_LG.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/sam.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/IRremote.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/ir_Lego_PF_BitStreamEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/private/IRremoteInt.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src/private/IRremoteBoardDefs.h"
)

target_include_directories(grove-infrared-receiver-and-emitter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IRSendRev/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grove-infrared-receiver-and-emitter INTERFACE
    arduino-compat
)
