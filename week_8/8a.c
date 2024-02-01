#include <stdio.h>
#include <string.h>
void main()
{
char s1[100],s2[100],s3[100],s4[100],s5[100],s6[100],s7[100];
int l,k;
printf("enter 1st string for length,comparison,to convert into string upper: \n");
gets(s1);
printf("enter 2st string for length,comparison,to convert into string upper: \n");
gets(s2);
printf("enter 3rd string for upper to lower case\n");
gets(s3);
printf("enter 1st string for concatination\n");
gets(s4);
printf("enter 2nd strind for string concatination\n");
gets(s5);
printf("enter 1st sring for string copy\n");
gets(s6);
printf("enter 2st sring for string copy\n");
gets(s7);
l=strlen(s1);
printf("length of string = %d\n",l);
k=strcmp(s1,s2);
printf("string comparison =%d\n",k);
strupr(s1);
printf("string upper case: %s\n",s1);
strlwr(s3);
printf("string lowercase : %s\n",s3);
strrev(s2);
printf("string reverse: %s\n",s2);
strcat(s4,s5);
printf("string concatination: %s\n",s4);
strcpy(s6,s7);
printf("string copy: %s\n",s6);
}
