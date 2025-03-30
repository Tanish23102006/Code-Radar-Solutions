// Your code here...
int factorialRange(int start, int end){
    for(int i = start; i <= end; i++){
        printf("%d\n",fact(i));
        return fact(i);
    }
    
}
int fact(int i){
    if(i==0 || i==i){
        return 1;
    }
    return i * fact(i-1);
}