#ifndef _common_h
#define _common_h

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <netdb.h>
#include <fcntl.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>

#include <openssl/ssl.h>

#define BUFSIZZ 256
#define CA_LIST "568ca.pem"
#define HOST	"localhost"

#define FMT_CN_MISMATCH "ECE568-CLIENT: Server Common Name doesn't match\n"
#define FMT_EMAIL_MISMATCH "ECE568-CLIENT: Server Email doesn't match\n"
#define FMT_NO_VERIFY "ECE568-CLIENT: Certificate does not verify\n"


extern BIO *bio_err;
int berr_exit (char *string);
int err_exit(char *string);


// Creates an SSLv2,3 context and loads key/cert from `keyfile`
SSL_CTX *initialize_ctx(char *keyfile, char *password);
void destroy_ctx(SSL_CTX *ctx);

#endif

