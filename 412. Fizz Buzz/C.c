char ** fizzBuzz(int n, int* returnSize){
    char** dst = (char**)malloc(n*sizeof(char*));
    for(int i=1; i<=n; i++){
        if(i%15 == 0){
            dst[i-1] = (char*)malloc(9*sizeof(char));
            strcpy(dst[i-1], "FizzBuzz");
            continue;
        }

        if (i%3 == 0){
            dst[i-1] = (char*)malloc(5*sizeof(char));
            strcpy(dst[i-1], "Fizz");
            continue;
        }
        if (i%5 == 0){
            dst[i-1] = (char*)malloc(5*sizeof(char));
            strcpy(dst[i-1], "Buzz");
            continue;
        }
        dst[i-1] = (char*)malloc(5*sizeof(char));
        sprintf(dst[i-1], "%d", i);
    }
    *returnSize = n;
    return dst;
}