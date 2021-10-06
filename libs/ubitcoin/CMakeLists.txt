add_library(ubitcoin INTERFACE)

target_sources(ubitcoin INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/Bitcoin.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/Hash.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/PSBT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/BaseClasses.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/Script.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/HDWallet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/Electrum.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/BitcoinCurve.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/Transaction.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/Conversion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/segwit_addr.c"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/memzero.c"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/ecdsa.c"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/address.c"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/base58.c"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/bignum.c"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/rand.c"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/pbkdf2.c"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/rfc6979.c"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/hasher.c"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/bip39.c"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/secp256k1.c"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/sha2.c"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/hmac.c"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/sha3.c"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/ripemd160.c"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/BitcoinCurve.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/uBitcoin_conf.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/BaseClasses.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/PSBT.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/Bitcoin.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/Hash.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/Electrum.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/Conversion.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/OpCodes.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/segwit_addr.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/base58.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/secp256k1.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/hmac.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/memzero.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/pbkdf2.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/sha2.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/hasher.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/address.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/options.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/bip39_english.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/sha3.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/bip32.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/bip39.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/bignum.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/rand.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/rfc6979.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/ecdsa.h"
  "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src/utility/trezor/ripemd160.h"
)

target_include_directories(ubitcoin INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uBitcoin/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ubitcoin INTERFACE
    arduino-compat
)
