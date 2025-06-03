#include <stdio.h>
int main(int n, char *arg[]) {
    int count[26];
    for(int i=0;i<26;i++) {
        count[i] = 0;
    }
    char *input = arg[1];
    printf("The recieved argument is: %s\n", input);
    for(int i=0;input[i] != '\0';i++) {
        if(input[i] >= 65 && input[i] <= 90) {
            input[i] = input[i] + 32;
        }
        count[input[i] - 'a']++;
    }
    printf("-------------------------\n");
    printf("| char  | \tcount\t|\n");
    printf("-------------------------\n");
    for(int i=0;i<26;i++) {
        if(count[i] > 0) {
            printf("| %c\t| \t%d\t|\n", 'a'+i, count[i]);
        }
    }
    printf("-------------------------\n");
    return 0;
}