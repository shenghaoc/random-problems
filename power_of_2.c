/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int is_power_of_2(int x) {
    int a = 0;
    for (int i = 0; i < sizeof(x) * 8; i++) {
        x >>= 1;
        a += x & 0b1;
    }
    return a;
}

int main()
{
    // 1, 2, 4, 8 ,16, 32 ...
    // 0b01, 0b10, 0b100, 0b1000
    int x = 32;
    printf("%d\n", is_power_of_2(x));
    return 0;
}
