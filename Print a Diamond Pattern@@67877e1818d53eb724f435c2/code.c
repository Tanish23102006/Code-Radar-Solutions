// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int space = n-1;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<= space; j++){
            printf(" ");
        }
        space--;
        for(int j = 1; j<=2*i-1; j++){
            printf("*");
        }
        
    }
}