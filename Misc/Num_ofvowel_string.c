#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str = (char *)malloc(100 * sizeof(char)); 
    if (str == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter a string: ");
    scanf("%99[^\n]",str);
    
    char *ptr = str;
    int count = 0;
    char vowels[11]="aeiouAEIOU";
    int encountered[10]={0};
    printf("The vowels in the string are: ")   ; 
    while (*ptr != '\0') {
        for(int i=0;i<10;i++){
        if (*ptr == vowels[i] && encountered[i] == 0) {
            printf("%c ",vowels[i]);
            encountered[i]=1;
            count++;
            break;
                }
            }
        ptr++;
    }    
    printf("\nThe number of vowels in the string is: %d\n", count);
    free(str);
    return 0;
}
