add_library(megunolink INTERFACE)

target_sources(megunolink INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MLP/DataStore.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/DeviceAddress.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/ArduinoTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/TimePlot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/Table.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/Plot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/RecordTable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/CommandParameter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/XYPlot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/InterfacePanel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/TestReport.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/Pushover.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/Audio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/Report.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/Map.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/Message.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/CommandDispatcherBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/MegunoLinkProtocol.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/StreamParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/CRC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/CommandHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/EEPROMStore.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/DeviceAddress.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/CommandProcessor.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/CircularBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/Filter.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/MessageHeaders.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/ArduinoTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/CommandDispatcher.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/MegunoLink.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/TCPCommandHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/DataStore.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/Audio.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/StreamParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/RecordTable.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/TimePlot.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/CommandDispatcherBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/InterfacePanel.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/Report.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/XYPlot.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/Message.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/TestReport.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/Table.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/CommandParameter.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/Plot.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/TCPConnection.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/CRC.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/Pushover.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/MegunoLinkProtocol.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLP/utility/Map.h"
)

target_include_directories(megunolink INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MLP"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(megunolink INTERFACE
    arduino-compat
)
