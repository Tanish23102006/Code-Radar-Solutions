#include <stdio.h>

int main() {
    int a,b;
    int count = 0;
    int num[a];
    scanf("%d %d",&a,&b);

    for (int i = 0; i < a; i++){
        scanf("%d",num[i]);

        if(num[i] == b){
            count = count + 1;
        }
    }
    printf("%d",count);

    return 0;
}