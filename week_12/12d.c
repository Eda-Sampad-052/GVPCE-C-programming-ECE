#include <stdio.h>

void main() {
int n, i;
char a[100], b[100];
printf("Enter the file name: ");
scanf("%s", a);
printf("Enter the number of characters: ");
scanf("%d", &n);
FILE *fp;
fp = fopen(a, "r");
if (fp == NULL) {
printf("Error opening file.\n");
return;
}
fseek(fp, -n, SEEK_END);
for (i = 0; i < n; i++) {
fscanf(fp, "%c", &b[i]);
}
printf("Last %d characters: %s\n", n, b);
fclose(fp);
}
