#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void showAddressOfEachCharcaterInString(char *);
void concatStringsWihoutStrcat(char *, char *);
int compareTwoStrings(char *, char *);
int lengthOfString(char *);
void convertToUppercase(char *);
void convertToLowercase(char *);
int calculateNumberOfVowels(char *);
void reverseString(char *);
char str1[30], str2[30], ans[30];
int main() {
    int choice;
    while(1) {
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                scanf("%s", str1);
                showAddressOfEachCharcaterInString(str1);
                break;
            case 2:
                scanf("%s", str1);
                scanf("%s", str2);
                concatStringsWihoutStrcat(str1, str2);
                printf("Concatenated String = %s\n", ans);
                break;
            case 3:
                scanf("%s", str1);
                scanf("%s", str2);
                strcat(str1, str2);
                printf("Concatenated String = %s\n", str1);
                break;
            case 4:
                scanf("%s", str1);
                scanf("%s", str2);
                int result = compareTwoStrings(str1, str2);
                if(result == 0) {
                    printf("Both are same\n");
                } else if(result > 0) {
                    printf("%s is greater\n", str1);
                } else {
                    printf("%s is greater\n", str2);
                }
                break;
            case 5:
                scanf("%s", str1);
                int length = lengthOfString(str1);
                printf("Length of %s = %d\n", str1, length);
                break;
            case 6:
                scanf("%s", str1);
                convertToUppercase(str1);
                printf("Uppercase of %s = %s\n", str1, ans);
                break;
            case 7:
                scanf("%s", str1);
                convertToLowercase(str1);
                printf("Lowercase of %s = %s\n", str1, ans);
                break;
            case 8:
                scanf("%s", str1);
                int count = calculateNumberOfVowels(str1);
                printf("No. of vowels = %d\n", count);
                break;
            case 9:
                scanf("%s", str1);
                reverseString(str1);
                printf("Reversed String of %s = %s\n", str1, ans);
                break;
            case -1:
                exit(0);
            default:
                printf("Enter correct option\n");
        }
    }
}
void reverseString(char *str) {
    int l = lengthOfString(str);
    for(int i=l-1,j=0;i>=0;i--,j++) {
        ans[j] = str[i];
    }
    ans[l] = '\0';
}
int calculateNumberOfVowels(char *str) {
    int count = 0;
     for(int i=0;str[i]!='\0';i++) {
        char c = str[i];
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}
void convertToLowercase(char *str) {
    int i=0;
    for(;str1[i]!='\0';i++) {
        if(str1[i] >= 'A' &&  str1[i] <= 'Z') {
            ans[i] = str1[i] + 32;
        }
    }
    ans[i] = '\0';
}
void convertToUppercase(char *str) {
    int i=0;
    for(;str1[i]!='\0';i++) {
        if(str1[i] >= 'a' &&  str1[i] <= 'z') {
            ans[i] = str1[i] - 32;
        }
    }
    ans[i] = '\0';
}
int lengthOfString(char *str) {
    int l = 0;
    for(int i=0;str[i]!='\0';i++) {
        l++;
    }
    return l;
}
int compareTwoStrings(char *str1, char *str2) {
    int i=0,j=0;
    for(;str1[i]!='\0' && str2[j]!='\0';i++,j++) {
        if(str1[i] > str2[j]) {
            return 1;
        } else if(str1[i] < str2[i]) {
            return -1;
        }
    }
    if(str1[i] == '\0' && str2[j] == '\0') {
        return 0;
    } else if(str1[i] == '\0') {
        return -1;
    } else {
        return 1;
    }
}
void concatStringsWihoutStrcat(char *str1, char *str2) {
    int i=0;
    for(int j=0;str1[j]!='\0';j++,i++) {
        ans[i] = str1[j];
    }
    for(int j=0;str2[j]!='\0';j++,i++) {
        ans[i] = str2[j];
    }
    ans[i] = '\0';
}
void showAddressOfEachCharcaterInString(char *str) {
    for(int i=0;str[i]!='\0';i++) {
        printf("Address of %c = %p\n", str[i], &str[i]);
    }
}