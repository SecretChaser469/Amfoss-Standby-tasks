#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAX_ROWS 1000
#define MAX_COLS 1000

int directions[8][2]={{-1,0},{1,0},{0,-1},{0,1},{-1,-1},{-1,1},{1,-1},{1,1}};

int main(){
    char grid[MAX_ROWS][MAX_COLS+1];
    int rows=0,cols=0;
    while(fgets(grid[rows],MAX_COLS+1,stdin)){
        grid[rows][strcspn(grid[rows],"\n")]='\0';
        cols=strlen(grid[rows]);
        rows++;
    }
    int total_sum=0;
    for(int r=0;r<rows;r++){
        for(int c=0;c<cols;c++){
            if(grid[r][c]=='*'){
                int numbers[2]={-1,-1},count=0;
                for(int i=0;i<8;i++){
                    int new_r=r+directions[i][0];
                    int new_c=c+directions[i][1];
                    if(new_r>=0&&new_r<rows&&new_c>=0&&new_c<cols){
                        if(isdigit(grid[new_r][new_c])){
                            if(count<2)numbers[count]=grid[new_r][new_c]-'0';
                            count++;
                        }
                    }
                }
                if(count==2){
                    total_sum+=numbers[0]*numbers[1];
                }
            }
        }
    }
    printf("%d\n",total_sum);
    return 0;
}