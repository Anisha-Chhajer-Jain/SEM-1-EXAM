#include <stdio.h>

int main() {
    int arr[7]={20,32,6,7,22,47,21};
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<7;i++){
        if(arr[i]>max){
            max=arr[i];
            printf("Largest= %d",max);
        }
    }
    for(int i=0;i<7;i++){
        if(arr[i]<min){
            min=arr[i];
            printf("Smallest= %d",min);
        }
    }
    return 0;
}