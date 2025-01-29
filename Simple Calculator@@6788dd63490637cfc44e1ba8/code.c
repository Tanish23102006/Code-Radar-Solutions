#include <stdio.h>

int main() {
    double a,b;
    char c;
    scanf("%lf %lf",&a,&b);
    scanf("%c",&c);
    
    switch(c){
        case '+':
        printf("%lf",a+b);
        break

        case '-':
        printf("%lf",a-b);
        break

        case '*':
        printf("%lf",a*b);
        break

        case '/':
        printf("%lf",a/b);
        break
    }
    
    return 0;
}