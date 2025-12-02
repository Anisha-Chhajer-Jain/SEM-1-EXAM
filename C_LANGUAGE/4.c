#include <stdio.h>
#include <string.h>
int main() {
    char ch[] = "Anisha";
    int len = strlen(ch);
    printf("Reverse is ", ch);
    for (int i = len - 1; i >= 0; i--)
        printf("%c", ch[i]);

    return 0;
}
