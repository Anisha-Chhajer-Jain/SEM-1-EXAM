#include <stdio.h>

int main() {
    int n;
    printf("Enter a integer");
    scanf("%d",&n);
    printf("%d \n",n);

    if(n>0){
        printf("No. is positive");
    }
    else if(n<0){
        printf("No. is negative");
    }
    else{
        printf("No. is zero");
    }
    return 0;
}