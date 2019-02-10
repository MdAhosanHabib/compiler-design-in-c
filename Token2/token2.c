#include<stdio.h>
int main()
{
    char str[100];
    int ftkn=0, stkn=0;
    printf("Enter a line: ");
    gets(str);
    char *token;
    token = strtok(str, " ");
    while( token != NULL)
    {
        if(token[0] == '/')
        {
            if( token[1] == '/' )
            {
                printf("%s \tis not token\n", token);
                stkn++;
            }
            else if( token[1] == '*')
            {
                printf("%s \tis not token\n", token);
                stkn++;
            }
        }

         else if(token[0]>='0' && token[0]<='9'){
        int i=1;
            while(token[i]>='0' && token[i]<='9'){
                i++;
            }
             if(token[i]>='a' && token[i] <= 'z'){
                printf("%s \tis not token\n", token);
                stkn++;
            }
            else if(token[i]>='A' && token[i] <='Z'){
                printf("%s \tis not token\n", token);
                stkn++;
            }
            else{
                printf("%s \tis token\n", token);
                ftkn++;
            }
        }

        else
        {
            printf("%s \tis token\n", token);
            ftkn++;
        }
        token = strtok(NULL, " ");
    }
    printf("\n\n\nNumber of token: %d\nNumber of not token: %d\n", ftkn, stkn);
    return 0;
}
