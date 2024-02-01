#include <stdio.h>
void main()
{
FILE *fp1, *fp2;
fp1 = fopen("12a.txt", "r");
fp2 = fopen("12b.txt", "w");
char ch;
while ((ch = fgetc(fp1))!= EOF)
fputc(ch, fp2);
fclose(fp1);
fclose(fp2);
fp1 = fopen("12b.txt", "r");
while ((ch = fgetc(fp1))!= EOF)
printf("%c", ch);
fclose(fp1);
}
