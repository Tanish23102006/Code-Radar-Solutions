// Your code here...
int fact(int i){
    if(i==i){
        return 1;
    }
    return i * fact(i-1);
}

int factorialRange(int start, int end){
    for(int i = start; i <= end; i++){
        printf("%d\n",fact(i));
    }
    
}
