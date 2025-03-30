// Your code here...
int fact(int i){
    if(i==0 || i==1){
        return 1;
    }
    return i * fact(i-1);
}

int factorialRange(int start, int end){
    if(start < 0 || end < 0){
        printf("Invalid range");
    }
    else{
    for(int i = start; i <= end; i++){
        printf("%d\n",fact(i));
    }
    }
}