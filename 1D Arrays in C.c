#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int iter = 0; iter < n ;iter++)
    {
        int data;
        scanf("%d", &data);
        sum += data;
    }
    printf("%d", sum);
    return 0;
}
