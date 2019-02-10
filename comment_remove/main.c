#include<stdio.h>
int main()
{

    char text[100],blank[100],blank2[100];
    int c=0, d=0, test=0;
    printf("enter some text\n");
    gets(text);
    while(text[c] !='\0')
    {

        if(text[c] =='/' && text[c+1]=='/' && text[c+1]=='*')
        {
            test==1;
        }
        if(test=1)
        {
            c++;
            continue;
        }
        else
        {

            blank[d]=text[c];
            d++;
        }
        c++;
    }
    blank[d]='\0';
    printf("text after moving blank space \n%s\n",blank);
    return 0;
}
