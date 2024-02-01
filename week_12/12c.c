#include <stdio.h>
void main()
{
    //to count and display the number of character,words,and lines in a file 12c.txt
    FILE *fp;
    fp=fopen("12c.txt","r");
    int c=0,w=0,l=0;
    char ch;
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch=='\n')
        {
            l++;
        }
        else if(ch==' ')
        {
            w++;
        }
        else
        {
            c++;
        }
    }
    fclose(fp);
    printf("Number of characters in the file is %d\n",c);
    printf("Number of words in the file is %d\n",w);
    printf("Number of lines in the file is %d\n",l);
}