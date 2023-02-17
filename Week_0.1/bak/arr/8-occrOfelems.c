#include <stdio.h>

int main()
{
    int arr[] = {22, 22, 33, 45, 45, 66, 45, 66, 77};
    int len = sizeof(arr) / sizeof(arr[0]);
    int rep[len];
    int i, j, ctr;

    for (i = 0; i < len; i++)
    {
        rep[i] = -1;
    }

    for(i = 0; i < len; i++) {
        ctr = 1;
        for(j = i+1; j< len; j++) {
            if(arr[i] == arr[j]) {
                ctr++;
                rep[j] = 0;
            }
        }
        if(rep[i] != 0) {
            rep[i] = ctr;
        }
    }

    for(i = 0; i < len; i++) {
        if(rep[i] != 0) {
            printf("%d : %d\n", arr[i], rep[i]);
        }
    }
}