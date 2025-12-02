#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Enter a two integer");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d %d\n",a,b);

    a=(a+b)-a;
    b=(a+b)-b;
    printf("After swap");
    printf(" a %d",a);
    printf(" b %d",b);
    return 0;
}