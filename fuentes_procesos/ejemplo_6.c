#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
	
int main(int argc, char* argv[]) {
	int i;

	if (argc == 2)
		for (i = 0; i < atoi(argv[1]); i++) {
			fork();
			printf("A\n");
		}
	return 0;
}