#include <stdio.h>

int main() {
    int a,b;
    char c;
    scanf("%lf %lf",&a,&b);
    scanf("%c",&c);
    
    switch(c){
        case '+':
        printf("%f",a+b);
        break;

        case '-':
        printf("%f",a-b);
        break;

        case '*':
        printf("%f",a*b);
        break;

        case '/':
        printf("%f",a/b);
        break;
    }
    
    return 0;
}