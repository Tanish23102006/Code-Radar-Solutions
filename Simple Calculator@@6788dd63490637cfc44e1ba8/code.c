#include <stdio.h>

int main() {
    double a,b;
    int result;
    char c;
    scanf("%lf %lf %c",&a,&b,&c);
    
    if (c=='+'){
        result = a+b;
        printf("%d",result);
    }   
    else if (c=='-'){
        result = a-b;
        printf("%d",result);
    }
    else if (c=='*'){
        result = a*b;
        printf("%d",result);
    }
    else if (c=='/'){
        result = a/b;
        printf("%d",result);
    }
    else{
        printf("Error");
    }
    return 0;
}