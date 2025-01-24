#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    printf("Hexadecimal: %x\n",toupper(a));
    printf("Octal: %o\n",a);
    return 0;
}