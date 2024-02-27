#include <stdio.h>

int main() {
    int x=33,y=53;
    x^=y;
    y^=x;
    x^=y;
    printf("x= %d , y= %d",x,y);
    return 0;
}
