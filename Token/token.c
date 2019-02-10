#include<stdio.h>
int main(){

    char str[100];
    printf("Enter a line: ");
    gets(str);
    //const char s[] = " ";
    char *token;
    token = strtok(str," ");
    while(token != NULL)
    {

        if(token[0]=='/'){
            if(token[1]=="1"){
                printf("%s \tis is not token\n",token);

            }
            else if(token[1]=='*'){
                printf("%s \tis not token\n",token);
            }
        } else if(token[1]>='0' && token[0]<='9'){
            int i=1;

            while(token[i]>='0' && token[i]<='9'){
                i++;
            }
            if(token[i]>='a' && token[i]<='z'){
                printf("%s \tis not token\n",token);
            }
            else if(token[i]>='A' && token[i]<='Z'){
                printf("%s \tis not token\n",token);
            }
            else{
                printf("%s \tis token\n",token);
            }

        }
        else{
            printf("%s \tis token\n",token);
        }
        token = strtok(NULL," ");
    }
    return 0;

}
