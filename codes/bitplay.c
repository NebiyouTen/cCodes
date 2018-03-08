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

    fprintf(stdout, "x is %lu, inverted is %lu, inverted again is %lu\n", x, y, z);
	invert(x,y,z);
    x = 0xbc;
 //   y = invert(x, 0, 1);
  //  z = invert(y, 0, 1);

  //  fprintf(stdout, "x is %lu, inverted is %lu, inverted again is %lu\n", x, y, z);

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
