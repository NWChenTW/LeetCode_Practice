int titleToNumber(char * s){
    int sum = 0;
    while (*s) sum = sum*26 + (*(s++)-'A'+1);
    return sum;
}