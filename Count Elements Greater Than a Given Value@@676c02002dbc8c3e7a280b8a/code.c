#include <stdio.h>

int main() {
    int a;
    int n;
    int count;
    int num[a];

    scanf("%d %d",&a,&n);

    for (int i = 1; i <= a; i++){
        scanf("%d",&num[i]);
        if (num[i] > n){
            count++;
        }
    }
    return 0;
}