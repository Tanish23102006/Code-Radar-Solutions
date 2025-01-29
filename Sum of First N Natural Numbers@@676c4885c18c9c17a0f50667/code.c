#include <stdio.h>


int main() {
    int n;

    scanf("%d",&n);

    for(int i=0; i<=n; i++){
        int result;
        result+=i;
    }
    printf("%d",result);
    return 0;
}