#include <stdio.h>

int maxof(int a, int b){
    return a > b ? a : b;
}
int minof(int a, int b){
    return a < b ? a : b;
}
void update(int *a,int *b) {
    // Complete this function

    int copy = *a;
    *a = *a + *b;
    *b = maxof(copy, *b) - minof(copy, *b);
    return;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
