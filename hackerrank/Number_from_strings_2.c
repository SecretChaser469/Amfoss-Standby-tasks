#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAX_LINES 1000
#define MAX_LENGTH 1000

char* words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int word_to_digit(char* word){
    for(int i=0; i<10; i++){
        if(strcmp(word, words[i]) == 0)
            return i;
    }
    return -1; // Return -1 if not found
}

int main(){
    int n;
    scanf("%d\n", &n);  // Read the number of lines
    char line[MAX_LENGTH];
    int sum = 0;
    
    for(int i = 0; i < n; i++){
        fgets(line, MAX_LENGTH, stdin);
        int first_digit = -1, last_digit = -1;
        int len = strlen(line);

        // Find first digit
        for(int j = 0; j < len; j++){
            if(isdigit(line[j])){
                first_digit = line[j] - '0';
                break;
            } else {
                char word[MAX_LENGTH];
                int k = 0;
                while(isalpha(line[j]) && j < len){
                    word[k++] = line[j++];
                }
                word[k] = '\0';
                if(k > 0){
                    first_digit = word_to_digit(word);
                    if(first_digit != -1) break;
                }
            }
        }

        // Find last digit
        for(int j = len - 1; j >= 0; j--){
            if(isdigit(line[j])){
                last_digit = line[j] - '0';
                break;
            } else {
                char word[MAX_LENGTH];
                int k = 0;
                while(isalpha(line[j]) && j >= 0){
                    word[k++] = line[j--];
                }
                word[k] = '\0';
                if(k > 0){
                    last_digit = word_to_digit(word);
                    if(last_digit != -1) break;
                }
            }
        }

        if(first_digit != -1 && last_digit != -1){
            sum += first_digit * 10 + last_digit;
        }
    }

    printf("%d\n", sum);
    return 0;
}
