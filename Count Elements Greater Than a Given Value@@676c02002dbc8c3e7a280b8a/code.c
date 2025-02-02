#include <stdio.h>

int main() {
    int a;
    int n;
    int count;
    int num[a];

    scanf("%d %d",&a,&n);

    for (int i = 0; i < a; i++){
        scanf("%d",&num[i]);
        if (num[i] > n){
            count = count + 1;
        }
        else{
            continue;
        }
    }
    printf("%d",count);
    return 0;
}