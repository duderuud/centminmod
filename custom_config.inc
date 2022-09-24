WPPLUGINS_ALL='n'
VHOSTCTRL_CLOUDFLAREINC='y'
CLOUDFLARE_ZLIB='y'

ENABLEMOTD_CSFMSG='n'         # motd banner csf message alert disaply
ENABLEMOTD_LINKSMSG='n'       # motd centminmod.com links bookmark alert display

AUTOTUNE_CLIENTMAXBODY='y'

## FOR PHP 7.4+
#FPM_WAKEUP_PATCH='y'

AUTODETECPHP_OVERRIDE='y'
##For Linux Kernel > 5.x
NGINX_IOURING_PATCH_BETA='y'

NGINX_ALLOWOVERRIDE='y'
NGINXCPU_AUTOTUNE_NEW='y'
NGINX_DYNAMICTLS='y'
NGINX_SSLCACHE_ALLOWOVERRIDE='y'
NGINX_LIBBROTLI='y'
NGINX_HPACK='y'
NGINX_DEVTOOLSETGCC='y'
AUTOHARDTUNE_NGINXBACKLOG='y'
NGINX_STAPLE_CACHE_OVERRIDE='y'
NGINX_STAPLE_CACHE_TTL='86400'
NGINX_MODSECURITY='y'
#NGINX_MODSECURITY_MAXMIND='y'

MARIADB_INSTALLTENTHREE='n'
MARIADB_INSTALLTENFOUR='n'
MARIADB_INSTALLTENFIVE='n'
MARIADB_INSTALLTENSIX='y'

SET_DEFAULT_MYSQLCHARSET='utf8mb4'

LETSENCRYPT_DETECT='y'
DUALCERTS='y'

GCC_FALIGN_FUNCTION='y'

LIBRESSL_SWITCH='n'
CLANG='n'
DEVTOOLSETELEVEN='y'
GENERAL_DEVTOOLSETGCC='y'
CRYPTO_DEVTOOLSETGCC='y'

CUSTOM_CURLRPM='y'
CUSTOM_CURLRPMVER='7.69.0'       # custom curl/libcurl version

MARCH_TARGETNATIVE_ALWAYS='y'

PHP_TUNING='y'
PHP_BROTLI='y'
PHP_LZFOUR='y'
PHP_LZF='y'
PHP_ZSTD='y'
#PHP_PGO='y'
#PHP_PGO_ALWAYS='y'
#PHPPGO_INDEXPATH='/home/nginx/domains/XX/public/index.php'
#PHPPGO_INDEXPATH_TWO='/home/nginx/domains/XX/public/index.php'
PHPINFO='y'

ZSTD_LOGROTATE_NGINX='y'
ZSTD_LOGROTATE_PHPFPM='y'

WP_FASTCGI_CACHE='y'
LETSENCRYPT_DETECT='y'
PHP_UPDATEMAINTENANCE='y'
MARIADB_UPDATEMAINTENANCE='y'

SSL_PROTOCOL_MODERN='y'

WPCLI_CE_QUERYSTRING_INCLUDED='y'

PUREFTPD_DISABLED='y'