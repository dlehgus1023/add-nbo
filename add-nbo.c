#include <stdio.h>

#include <netinet/in.h>

int main(int* argc, char* argv[]) {
	FILE *fd0, *fd1;
	uint32_t data0, data1, number0, number1;

	fd0 = fopen(argv[1], "r");
	fd1 = fopen(argv[2], "r");

	fread(&data0, sizeof(uint32_t), 1, fd0);
	fread(&data1, sizeof(uint32_t), 1, fd1);
	
	number0 = ntohl(data0);
	number1 = ntohl(data1);

	printf("%d(%p) + %d(%p) = %d(%p)\n", number0, number0, number1, number1, number0 + number1, number0 + number1);
	return 0;
}
