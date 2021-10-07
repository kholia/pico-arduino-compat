add_library(pac-ark-cpp-client INTERFACE)

target_sources(pac-ark-cpp-client INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/test/connection/connection.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/test/http/http.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/test/api/bridgechains.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/test/api/blockchain.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/test/api/blocks.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/test/api/votes.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/test/api/businesses.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/test/api/locks.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/test/api/node.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/test/api/peers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/test/api/wallets.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/test/api/paths.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/test/api/rounds.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/test/api/transactions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/test/api/delegates.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/test/host/host.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/test/iot/test_main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/http/os/http.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/http/iot/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/http/iot/http.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/api/paths.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/api/bridgechains/bridgechains.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/api/peers/peers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/api/transactions/transactions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/api/businesses/businesses.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/api/blocks/blocks.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/api/delegates/delegates.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/api/blockchain/blockchain.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/api/wallets/wallets.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/api/rounds/rounds.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/api/locks/locks.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/api/votes/votes.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/api/node/node.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/host/host.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/examples/cmake_example/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/test/iot/platform.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/include/cpp-client/api/blockchain/blockchain.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/test/mocks/mock_http.h"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/test/mocks/mock_api.h"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/helpers/client_helpers.h"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/include/cpp-client/arkClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/include/cpp-client/connection/connection.h"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/include/cpp-client/http/http.h"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/include/cpp-client/api/api.h"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/include/cpp-client/api/abstract.h"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/include/cpp-client/api/paths.h"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/include/cpp-client/api/base.h"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/include/cpp-client/api/bridgechains/bridgechains.h"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/include/cpp-client/api/peers/peers.h"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/include/cpp-client/api/transactions/transactions.h"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/include/cpp-client/api/businesses/businesses.h"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/include/cpp-client/api/blocks/blocks.h"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/include/cpp-client/api/delegates/delegates.h"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/include/cpp-client/api/wallets/wallets.h"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/include/cpp-client/api/rounds/rounds.h"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/include/cpp-client/api/locks/locks.h"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/include/cpp-client/api/votes/votes.h"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/include/cpp-client/api/node/node.h"
  "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src/include/cpp-client/host/host.h"
)

target_include_directories(pac-ark-cpp-client INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/cpp-client/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ark-cpp-client INTERFACE
    arduino-compat
)
