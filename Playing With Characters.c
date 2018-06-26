#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    scanf("%c ", &ch);//remember after c there is space ...
    printf("%c\n", ch);

    char str[20];
    scanf("%s ", &str);// remember after s there is space...
    printf("%s\n", str);

    char ck[100];
    scanf("%[^\n]%*s ", &ck); // for whole complete sentence with spaces and other signs...
    printf("%s", ck);

    return 0;
}
