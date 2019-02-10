#include <stdio.h>
#include <stdlib.h>

#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a line: ");
    gets(str);
    const char s[30]=" ";
    char *token;

    token=strtok(str, s);

    while(token !=NULL)
    {
         if(token[0]=='/'){
            if(token[1]=='/'){
                printf("%s \tis not a token\n",token);
            }else if(token[1]=='*'){
                printf("%s \tis not token\n",token);
            }else{
                printf("%s \tis not token\n",token);
            }
         }
         else if(token[0]>='0' && token[0]<='9'){
            if(token[1]>='a' && token[1]<='z' || token[1]>='A' && token[1]<='Z'){
                printf("%s \tis not token\n",token);
            }else{
                printf("%s \tis number\n",token);
            }
         }
         else{
            if(token[1]>='a' && token[1]<='z' || token[1]>='A' && token[1]<='Z'){
                if(strcmp("for",str)==0||strcmp("while",str)==0||strcmp("do",str)==0||strcmp("int",str )==0||
                   strcmp("float",str)==0||strcmp("char",str)==0||strcmp("double",str)==0||strcmp("static",str)==0||
                   strcmp("switch",str)==0||strcmp("case",str)==0||strcmp("scanf",str)==0||strcmp("printf",str)==0){
                    printf("%s \tis keyword\n",token);
                }else{
                    printf("%s \tis identifier\n",token);
                }
            }else if(token[0]=='+'||token[0]=='-'||token[0]=='*'||token[0]=='/'||token[0]=='<'||token[0]=='>'||token[0]=='='){
                if(token[0]==','||token[0]==';'||token[0]=='"'||token[0]==':'){
                    printf("%s \tis symbol\n",token);
                }else{
                    printf("%s \tis operator\n",token);
                }
            }
         }

         token= strtok(NULL, " ");
    }


    return 0;
}
