// // Write a program to find all subsets of a string.

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[] = "ABC";
//     int len = strlen(str);
//     char s[10] = "";

//     int i,j;
//     for(i = 0; i < len; i++) {
//         printf("%c\n", str[i]);
//     }

//     for(i = 0; i < len; i++) {
//         for( j = i+1; j < len; j++) {
//             s = s + str[i] ;
//             printf("%c%c\n", str[i],str[j]);
//         }
//     }

// }
#include <stdio.h>
#include <string.h>

// User-defined substring function that will take string(str), position(p) and no of character(len) as input
// Produces result c as output
// void substring(char str[], char sub[], int i, int j)
// {
//     int c = 0;
//     while (c < j)
//     {
//         sub[c] = str[i + c];
//         c++;
//     }
//     sub[c] = '\0';
// }

// int main()
// {
//     char c[10], str[10] = "ABC";
//     int i, j, len = strlen(str);

//     printf("All subsets for the given string are: ");
//     // This loop maintains the starting character
//     for (i = 0; i < len; i++)
//     {
//         // This loop adds the next character every iteration for the subset to form and add it to the array
//         for (j = 1; j <= len - i; j++)
//         {
//             substring(str, c, i, j);
//             printf("%s\n", c);
//         }
//     }
//     return 0;
// }

void subString(char str[], char sub[], int i, int j) {
    int c = 0; 
    while( c < j) {
        sub[c] = str[i+c];
        c++;
    }
    sub[c] = '\0';
}

int main() {
    char c[10], str[10] = "ABC";
    int i,j,len = strlen(str);
    
    for(i = 0; i < len; i++) {
        for(j = 1; j <= len - i; j++) {
            subString(str,c,i,j);
            printf("%s\n", c);
        }
    }

}