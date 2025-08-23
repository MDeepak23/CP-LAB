// CN 1st program character stuffing
// deepak
// p
// n
// o/p pdeeppakn
#include <stdio.h>
#include <string.h>
int main() {
    char in[50], stuffed[100] = "";
    char start[2], end[2];
    printf("Enter the input string:\n");
    scanf("%s", in);
    printf("Enter start character:\n");
    scanf(" %c", &start[0]);
    start[1] = '\0';
    printf("Enter end character:\n");
    scanf(" %c", &end[0]);
    end[1] = '\0';
    strcat(stuffed, start);
    for (int i = 0; i < strlen(in); i++) {
        char temp[2] = {in[i], '\0'};
        if (in[i] == start[0]) {
            strcat(stuffed, start);
            strcat(stuffed, start); 
        } else if (in[i] == end[0]) {
            strcat(stuffed, end);
            strcat(stuffed, end);    
        } else {
            strcat(stuffed, temp);   
        }
    }
    strcat(stuffed, end);
    printf("Stuffed data: %s\n", stuffed);
}
