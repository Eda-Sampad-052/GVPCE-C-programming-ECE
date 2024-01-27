#include <stdio.h>
#include <ctype.h>

int main() {
    int a;
    printf("Enter length of string: ");
    scanf("%d", &a);

    char st[a], vo[] = "aeiou";
    printf("Enter string: ");
    scanf("%s", st);

    int j, k;
    for (int i = 0; st[i] != '\0'; i++) {
        for (j = 0; vo[j] != '\0'; j++) {
            if (st[i] == vo[j]) {
                for (k = i; st[k] != '\0'; k++) {
                    st[k] = st[k + 1];
                }
                i--;
            }
        }
    }

    printf("\nModified string is %s\n", st);

    return 0;
}