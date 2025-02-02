#include <stdio.h>

int main() {
    int a;
    int even = 0;
    int odd = 0;
    int arr[a];
    scanf("%d",&a);

    for(int i = 0; i<a; i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even = even + 1;
        }
        else{
            odd = odd + 1;
        }
    }
    printf("%d %d",even,odd);
    return 0;
}