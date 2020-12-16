#include <stdio.h>

int main(void) {
	int data = 100;
	int* print;
	print = &data;

	printf("변수명	주소값		저장값 \n");
	printf("--------------------------------\n");
	printf("	data	%p	%8d\n", &data, data);
	printf("print	%p	%p\n", &print, print);

	return 0;
}