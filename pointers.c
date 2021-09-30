#include <stdio.h>

int main() {
	char ctest = 'A';
	int itest = -25;
	long ltest = 40000;

	printf("Address of char: %p\n",&ctest);
	printf("Address of char: %lu\n",&ctest);
	printf("Address of int: %p\n",&itest);
	printf("Address of int: %lu\n",&itest);
	printf("Address of long: %p\n",&ltest);
	printf("Address of long: %lu\n",&ltest);

	char *cpoint = &ctest;
	int *ipoint = &itest;
	long *lpoint = &ltest;
	printf("Addr. cpoint has: %p\n",cpoint);
	printf("Addr. ipoint has: %p\n",ipoint);
	printf("Addr. lpoint has: %p\n",lpoint);

	*cpoint = 'B';
	printf("char value: %c\n",ctest);
	*ipoint = -250;
	printf("int value: %d\n",itest);
	*lpoint = 33333;
	printf("long value: %ld\n",ltest);

	unsigned int positive_int = 0xAABBCCDD;
	int *upointer = &positive_int;
	char *c_upointer = &positive_int;
	printf("\nupointer: %p\t points to: %u\n",upointer,*upointer);
	printf("c_upointer: %p\t points to: %u\n",c_upointer,*c_upointer);
	printf("positive_int in decimal: %u\t and hex: %x\n",positive_int,positive_int);
	printf("pos_int byte 0: 0x%hhx\tbyte 1: 0x%hhx\tbyte 2: 0x%hhx\tbyte 3: 0x%hhx\n",*(c_upointer),*(c_upointer+1),*(c_upointer+2),*(c_upointer+3));
  
	(*(c_upointer))++;
	(*(c_upointer+1))++;
	(*(c_upointer+2))++;
	(*(c_upointer+3))++;
	
	printf("\nEach byte of positive_int is now incremented by 1\n");
	printf("positive_int in decimal: %u\t and hex: %x\n",positive_int,positive_int);
	printf("upointer: %p\t points to: %u\n",upointer,*upointer);
	printf("c_upointer: %p\t points to: %u\n",c_upointer,*c_upointer);
	printf("positive_int in decimal: %u\t and hex: %x\n",positive_int,positive_int);
	printf("pos_int byte 0: 0x%hhx\tbyte 1: 0x%hhx\tbyte 2: 0x%hhx\tbyte 3: 0x%hhx\n",*(c_upointer),*(c_upointer+1),*(c_upointer+2),*(c_upointer+3));
	
	(*(c_upointer))+=16;
	(*(c_upointer+1))+=16;
	(*(c_upointer+2))+=16;
	(*(c_upointer+3))+=16;
	printf("\nEach byte of positive_int is now incremented by an additional 16\n");
	printf("positive_int in decimal: %u\t and hex: %x\n",positive_int,positive_int);
	printf("upointer: %p\t points to: %u\n",upointer,*upointer);
	printf("c_upointer: %p\t points to: %u\n",c_upointer,*c_upointer);
	printf("positive_int in decimal: %u\t and hex: %x\n",positive_int,positive_int);
	printf("pos_int byte 0: 0x%hhx\tbyte 1: 0x%hhx\tbyte 2: 0x%hhx\tbyte 3: 0x%hhx\n",*(c_upointer),*(c_upointer+1),*(c_upointer+2),*(c_upointer+3));
}
