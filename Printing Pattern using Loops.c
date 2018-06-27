#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int min(int a, int b){
    return a < b ? a : b;
}
int main()
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.

    int len = 2*n -1;
    for(int iter = 0; iter < len; iter++)
    {
        for(int jter = 0; jter < len; jter++)
        {
            int m = min(iter, jter);
            m = min(m, len-iter-1);
            m = min(m, len-jter-1);
            printf("%d ", n-m);
        }
        printf("\n");
    }
    return 0;
}
