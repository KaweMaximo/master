#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
 
    int n = 5;
    int a = 0;
    int b = 1;

    for (int b = 1; b <= n; b++);
    for (int c = b; c <= n; c++);
    (a = a + 1);
    
    printf("%d", &a);

    return 0;

    }
