#include <stdio.h>

int main() {
    double a,b;
    char c;
    scanf("%lf %lf %c",&a,&b,&c);
    
    if (c=='+'){
        result = a+b;
        printf("%d",result);
    }   
    else if (c=='-'){
        printf("%d",a-b);
    }
    else if (c=='*'){
        printf("%d",a*b);
    }
    else if (c=='/'){
        printf("%d",a/b);
    }
    else{
        printf("error");
    }
    return 0;
}