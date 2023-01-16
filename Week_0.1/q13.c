#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];

    printf("Enter a string : ");
    scanf("%s", s);

    int i;
    int l = strlen(s);
    for(i = 0; i < l/2; i++) {
        if(s[i] != s[l-i-1]) {
            printf("Entered string is not a palindrome\n");
            return 0;
        }
    }
    printf("Entered string is a palindrome\n");
}