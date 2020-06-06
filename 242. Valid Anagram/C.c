bool isAnagram(char * s, char * t){
    if (s == NULL && t == NULL) return true;
    if (strlen(s) != strlen(t)) return false;

    int a[58] = {0};
    for (int i=0; i<strlen(s); i++){
        a[s[i]-'A']++;
        a[t[i]-'A']--;
    } 

    for(int i=0; i<58; i++){
        if(a[i]<0) return false;
    }
    return true;
}