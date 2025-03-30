// Your code here...
int isPrime(int n){
//     if(n <= 1){
//         printf("0");
//         return 0;
//     }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            printf("0");
        }
        break;
    }
    printf("1");
}