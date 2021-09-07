#include <stdio.h> 

char* s = "*** libc ***";

int addnum(int a, int b)
{
    printf("\n%s\n", s);
    return a + b;
}	
