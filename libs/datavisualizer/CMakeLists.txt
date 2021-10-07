add_library(pac-datavisualizer INTERFACE)

target_sources(pac-datavisualizer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardCheckBox.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardProgressBar.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardNumericInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/AtmelDataGatewaySpi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardRadioGroup.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardTable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/AtmelDataProtocol.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardLabel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardPieChart.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardGraph.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardTableCell.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerTerminal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardSignal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/AtmelDataGatewayTwi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardGraphChannel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/AtmelDataGatewayUart.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardSegmentDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerGraphAxis.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerGraphAxisCursor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerGraph.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardRectangle.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardSlider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardPieChartSlice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerGraphAxisChannel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardSurfaceGrid.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardPieChartSlice.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardRectangle.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerTerminal.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardTable.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizer.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardNumericInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/AtmelDataGatewaySpi.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardSegmentDisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardGraphChannel.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardCheckBox.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/AtmelDataGatewayUart.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardGraph.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardRadioGroup.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardSignal.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerGraph.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardProgressBar.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardTableCell.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/AtmelDataProtocol.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerGraphAxisCursor.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/AtmelDataGatewayTwi.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardSurfaceGrid.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardLabel.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardPieChart.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboard.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerDashboardSlider.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerGraphAxis.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/AtmelDataGateway.h"
  "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src/DataVisualizerGraphAxisChannel.h"
)

target_include_directories(pac-datavisualizer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DataVisualizer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-datavisualizer INTERFACE
    arduino-compat
)
