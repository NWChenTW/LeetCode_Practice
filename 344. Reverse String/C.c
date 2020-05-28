void reverseString(char* s, int sSize){
    int l = 0;
    int r = sSize-1;
    char ch;

    while (l < r) {
        ch = s[l];
        s[l] = s[r];
        s[r] = ch;
        l++;
        r--;
    }
return s;
}