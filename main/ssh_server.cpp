#include "ssh_server.h"

#include "libssh_esp32.h"
#include <libssh/libssh.h>
#include <libssh/server.h>
#include "examples_common.h"

void ssh_server_init(void) {
  libssh_begin();
}