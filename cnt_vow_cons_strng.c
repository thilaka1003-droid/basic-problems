#include <stdio.h>

int main() {
    int vow=0,i,cons=0;
    char s[100];
    printf("Enter string");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')

        vow++;
        else
        cons++;
    }
    printf("count is %d %d",vow,cons);
    // Write C code here
    
    return 0;
}