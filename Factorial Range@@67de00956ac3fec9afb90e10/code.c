// Your code here...
int factorialRange(int start, int end){
    for(int i = start; i <= end; i++){
        printf("%d\n",fact(i));
    }
}
int fact(int n){
    if(n==0 || n==i){
        return 1;
    }
    return n * fact(n-1);
}