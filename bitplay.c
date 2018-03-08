#include <stdio.h>
unsigned int invert(unsigned int x, int p, int n);

int main()
{
    unsigned int x;
    unsigned int y;
    unsigned int z;

    x = 2;
    y = invert(x, 1, 1);
    z = invert(y, 1, 1);

    fprintf(stdout, "x is %u, inverted is %u, inverted again is %u\n", x, y, z);
	invert(x,y,z);
    x = 0xbc;
    y = invert(x, 3, 2);
    z = invert(y, 3, 2);

    fprintf(stdout, "x is %u, inverted is %u, inverted again is %u\n", x, y, z);

    x = 0xAA;
    y = invert(x, 4, 1);
    z = invert(y, 4, 1);

    fprintf(stdout, "x is %u, inverted is %u, inverted again is %u\n", x, y, z);

    x = 0x95;
    y = invert(x, 1, 3);
    z = invert(y, 1, 3);

    fprintf(stdout, "x is %u, inverted is %u, inverted again is %u\n", x, y, z);

    x = 0x123;
    y = invert(x, 3, 1);
    z = invert(y, 3, 1);

    fprintf(stdout, "x is %u, inverted is %u, inverted again is %u\n", x, y, z);

    x = 0x950;
    y = invert(x, 2, 2);
    z = invert(y, 2, 2);

    fprintf(stdout, "x is %u, inverted is %u, inverted again is %u\n", x, y, z);


    // add your own test cases - at least 4 more.
}


unsigned int invert(unsigned int x, int p, int n){
	unsigned int temp = 0u;
	int left_shit = temp << n;
	int invert_the_left_shit = ~left_shit;
	left_shit = invert_the_left_shit << p;
	unsigned int output = x ^ left_shit;
 	return output;
}
