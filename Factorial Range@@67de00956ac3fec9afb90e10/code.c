// Your code here...
int fact(int i){
    if(i==0 || i==1){
        return 1;
    }
    else if(i < 0){
        printf("Invalid Range");
        return 0;
    }
    return i * fact(i-1);
}

int factorialRange(int start, int end){
    for(int i = start; i <= end; i++){
        printf("%d\n",fact(i));
    }
}