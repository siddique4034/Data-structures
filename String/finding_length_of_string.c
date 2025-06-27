#include <stdio.h>

int stringLen(char str[]) {
    int i;
    for(i=0; str[i]!='\0'; i++) {
        
    }
    return i;
}

int main()
{
    char name[] = {"siddique"};
    int length_of_name = stringLen(name);
    printf("%d is the length of string.\n", length_of_name);

    return 0;
}



/*
Time complexites = O(n)
Space complexites = O(1)
*/

