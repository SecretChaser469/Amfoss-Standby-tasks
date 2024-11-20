#include<stdio.h>
#include<string.h>
#define ALPHABET_SIZE 26
char*twoStrings(char*s1,char*s2){
    int freq[ALPHABET_SIZE]={0};
    for(int i=0;s1[i]!='\0';i++)freq[s1[i]-'a']=1;
    for(int i=0;s2[i]!='\0';i++)if(freq[s2[i]-'a'])return "YES";
    return "NO";
}
int main(){
    int p;
    scanf("%d",&p);
    while(p--){
        char s1[100001],s2[100001];
        scanf("%s%s",s1,s2);
        printf("%s\n",twoStrings(s1,s2));
    }
    return 0;
}
