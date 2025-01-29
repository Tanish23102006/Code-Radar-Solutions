#include <stdio.h>

int is_prime(int a){
    if (a<=0){
        return 0
    }
    for (int i = 2; i<=a/2; i++){
        if (a%i==0){
            return 0;
        }
    return 1;
    }
    return 0;
}
int main(){
    int a;
    scanf("%d",&a);
    if(is_prime(a)){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}