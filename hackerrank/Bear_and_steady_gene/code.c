#include<stdio.h>
#include<string.h>
#include<limits.h>
#define MAX_N 500000
int canMakeSteady(int freq[],int limit){
    return freq['A']<=limit&&freq['C']<=limit&&freq['G']<=limit&&freq['T']<=limit;
}
int steadyGene(char*gene,int n){
    int freq[256]={0},limit=n/4,left=0,right=0,minLen=INT_MAX;
    for(int i=0;i<n;i++)freq[gene[i]]++;
    if(canMakeSteady(freq,limit))return 0;
    while(right<n){
        freq[gene[right]]--;
        right++;
        while(canMakeSteady(freq,limit)){
            minLen=(right-left)<minLen?(right-left):minLen;
            freq[gene[left]]++;
            left++;
        }
    }
    return minLen;
}
int main(){
    int n;
    char gene[MAX_N+1];
    scanf("%d%s",&n,gene);
    printf("%d\n",steadyGene(gene,n));
    return 0;
}
