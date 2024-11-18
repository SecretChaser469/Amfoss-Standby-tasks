#include<stdio.h>
#include<ctype.h>
int extractValue(char*s){
    int first=-1,last=-1;
    for(int i=0;s[i]!='\0';i++){
        if(isdigit(s[i])){
            if(first==-1)first=s[i]-'0';
            last=s[i]-'0';
        }
    }
    return (first!=-1&&last!=-1)?(first*10+last):0;
}
int main(){
    int n,sum=0;
    scanf("%d",&n);
    char line[1001];
    while(n--){
        scanf("%s",line);
        sum+=extractValue(line);
    }
    printf("%d\n",sum);
    return 0;
}
