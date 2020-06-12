int firstUniqChar(char * s){
    int count[128];

    for (int i=0; i<127; i++) count[i]=0;
    for (int j=0; s[j] != '\0'; j++)
        count[s[j]]++;
    for (int k=0; s[k] != '\0'; k++)
        if(count[s[k]] == 1)
            return k;
    return -1;      
}