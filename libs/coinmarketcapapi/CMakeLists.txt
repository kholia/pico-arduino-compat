add_library(coinmarketcapapi INTERFACE)

target_sources(coinmarketcapapi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-coinmarketcap-api/src/CoinMarketCapApi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-coinmarketcap-api/src/CoinMarketCapApi.h"
)

target_include_directories(coinmarketcapapi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-coinmarketcap-api/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(coinmarketcapapi INTERFACE
    arduino-compat
)
