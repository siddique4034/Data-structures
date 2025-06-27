#include <stdio.h>

void changeCase(char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] += 32;
        }
        else if (str[i] >= 97 && str[i] <= 122) {
            str[i] -= 32;
        }
    }
    printf("%s \n", str);
}

int main() {
    char name[] = "sidD&ique";
    changeCase(name);
    printf("%s", name);

    return 0;
}



/*
Time complexity = O(n)
Space complexity = O(1)
*/
