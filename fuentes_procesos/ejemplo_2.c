#include <unistd.h>
#include <stdio.h>
#define _XOPEN_SOURCE 500

int main(void) {
	printf("PID: %d\n", getpid());
	printf("PPID: %d\n", getppid());
	printf("Sesión: %d\n", getsid(0));
	return 0;
} 
