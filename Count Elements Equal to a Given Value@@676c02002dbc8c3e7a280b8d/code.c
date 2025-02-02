#include <stdio.h>

int main() {
    int a,b;
    int count = 0;

    scanf("%d",&a);
    scanf("%d",&b);
    int num[a];

    for (int i = 0; i < a; i++){
        scanf("%d",&num[i]);

        if(num[i] == b){
            count = count + 1;
        }
    }
    printf("%d",count);

    return 0;
}