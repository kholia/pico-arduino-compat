add_library(pac-seeed-arduino-rpcunified INTERFACE)

target_sources(pac-seeed-arduino-rpcunified INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_unified_log.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc_Unified_init.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_wifi/rpc_wifi_mdns.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_wifi/rpc_wifi_callback_impl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_wifi/ssl_client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_wifi/rpc_wifi_api_hal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/rpc_ble_api_hal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/rpc_ble_callback_impl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_port_freertos.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/rpc_system_client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/rpc_ble_callback_server.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_arbitrated_client_manager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_framed_transport.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_crc16.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/rpc_ble_api_client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_simple_server.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_client_manager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_message_loggers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_transport_arbitrator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_basic_codec.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_arduino_uart_transport.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_threading_freertos.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_server.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_setup_mbf_static.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/rpc_wifi_api_client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/rpc_wifi_callback_server.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_setup_arduino_uart.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_message_buffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_setup_mbf_dynamic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/examples/ble_client/ble_msg_handle.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/examples/ble_client/ble_gattc_callback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/examples/ble_server/ble_gatts_callback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/examples/ble_server/ble_msg_handle.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/esp/esp_hal_log.c"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/dns.c"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/netdb.c"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/sockets.c"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/sdkconfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_unified_log.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/seeed_rpcUnified.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/autoconf.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/app_msg.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/platform_opts_bt.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/platform_autoconf.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_api_utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/platform_opts.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/dlist.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_wifi/wlan_intf.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_wifi/wifi_ind.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_wifi/rpc_wifi_mdns.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_wifi/rpc_wifi_api_utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_wifi/wireless.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_wifi/wifi_conf.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_wifi/ssl_client.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_wifi/wifi_structures.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_wifi/wifi_constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_wifi/rpc_wifi_api_hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_wifi/wifi_dm.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_wifi/wifi_unified.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/md2.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/compat-1.3.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/md4.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/check_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/cipher.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/hmac_drbg.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/x509_crt.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/ssl_ticket.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/padlock.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/md5.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/x509_csr.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/havege.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/ccm.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/ssl.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/oid.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/memory_buffer_alloc.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/cipher_internal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/x509.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/net_sockets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/poly1305.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/net.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/version.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/rsa.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/pk.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/esp_debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/entropy.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/threading.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/certs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/ecjpake.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/aria.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/aes.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/pkcs11.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/bn_mul.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/ssl_cookie.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/asn1write.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/hkdf.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/dhm.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/gcm.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/sha512.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/nist_kw.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/md_internal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/des.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/ssl_ciphersuites.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/blowfish.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/entropy_poll.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/ssl_internal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/pem.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/rsa_internal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/xtea.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/sha1.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/ssl_cache.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/ecdh.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/chachapoly.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/pkcs12.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/timing.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/ecp_internal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/x509_crl.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/arc4.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/asn1.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/bignum.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/platform_util.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/platform_time.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/esp_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/sha256.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/cmac.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/pk_internal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/md.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/ecdsa.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/pkcs5.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/ripemd160.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/ctr_drbg.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/base64.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/chacha20.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/aesni.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/camellia.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/ecp.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rpc_mbedtls/error.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/gap_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/ble_unified.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/ble_client.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/gatt.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/bt_flags.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/bt_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/ble_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/gap_adv.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/gap_le_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/gap_callback_le.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/gap_bond_le.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/gap_msg.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/gap_conn_le.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/gap_le.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/profile_client.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/rpc_ble_api_utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/rpc_ble_api_hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/gap.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/ble_server.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/gap_scan.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/gap_privacy.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/profile_server.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/rtl_ble/gap_storage_le.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/esp/esp_event_loop.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/esp/esp_event_legacy.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/esp/esp_smartconfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/esp/esp_eth.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/esp/esp_lib_unified.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/esp/esp_wifi_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/esp/esp_hal_log.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/esp/esp_wifi.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/esp/esp_event.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/esp/esp_err.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/esp/tcpip_adapter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/esp/esp_log.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/esp/mdns.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/esp/esp_wps.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/esp/esp_system.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/ip6_addr.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/err.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/dns.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/tcp.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/ip.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/pbuf.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/mem.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/icmp.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/tcpip.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/sockets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/lwipopts.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/ip_addr.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/icmp6.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/errno.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/netdb.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/inet_chksum.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/ip4_addr.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/def.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/opt.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/arch.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/inet.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/rpc_wifi_lwip_utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/inet6.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/prot/ip.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/prot/ip4.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/prot/icmp.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/prot/icmp6.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/prot/ip6.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/arch/cc.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/arch/sys_arch.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/lwip/priv/tcpip_priv.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_threading.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_crc16.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_framed_transport.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/rpc_ble_callback_server.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_static_queue.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_shim_unified.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_transport_arbitrator.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_message_loggers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/rpc_system.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_version.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_message_buffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_manually_constructed.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_codec.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_port.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/rpc_wifi_callback_server.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/rpc_wifi_callback.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_arbitrated_client_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_transport.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_arduino_uart_transport.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/rpc_ble_api.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_simple_server.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/rpc_ble_callback.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_config_internal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/rpc_wifi_api.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_client_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/rpc_system_header.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_setup_arduino_uart.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_basic_codec.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_mbf_setup.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_server.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src/erpc/erpc_transport_setup.h"
)

target_include_directories(pac-seeed-arduino-rpcunified INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_rpcUnified/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-seeed-arduino-rpcunified INTERFACE
    arduino-compat
)
