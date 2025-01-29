#include <stdio.h>

int main() {
    double a,b;
    char c;
    scanf("%lf %lf",&a,&b);
    scanf("%c",&c);
    
    switch(c){
        case '+':
        printf("%.2lf",a+b);
        break

        case '-':
        printf("%.2lf",a-b);
        break

        case '*':
        printf("%.2lf",a*b);
        break

        case '/':
        printf("%.2lf",a/b);
        break
    }
    
    return 0;
}