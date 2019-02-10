#include<stdio.h>
int main()
{
     char str[1000];
    FILE *fp;
    int year, tkn = 0, nTkn =0;

    fp = fopen("file.txt", "r+");
    //fputs("We are in 2012", fp);
    rewind(fp);

    fscanf(fp, "%[^\t]",  str, "r+");
    printf("%s\n\n\n", str);
   // printf("%d\n", strlen(str));

    //comment remove
    char blank[1000];
    int c=0, d=0, test=0;
    while(c != strlen(str)){
        if(str[c] == '/' && str[c+1] == '/'){
            while(str[c] != '\n') c++;
            blank[d] = '\n';
            d++;
        }
         else {
            blank[d] =str[c];
            d++;

        }
        c++;
    }
    blank[d] = '\0';
    printf("After removing comment: \n %s \n\n", blank);

    //white space remove
    char final[1000];
    c=0, d=0, test=0;
    while(c != strlen(blank)){
        if(blank[c] == ' '){
            final[d] = blank[c];
            d++;
            while(blank[c] == ' '){
                c++;
            }
        } else {
            final[d] = blank[c];
            d++;
            c++;
        }
    }
    final[d] = '\0';
    printf("After removing comment and white space: \n %s \n\n", final);



    char *token;
    token = strtok(final," ");

    while( token != NULL)
    {
        int a = strlen(token);
        a--;
        if(token[a]=='\n') token[a] =' ';
        if(token[0] == '/')
        {
            if( token[1] == '/' )
            {
                printf("%s \t is not token\n", token);
                nTkn++;
            }
            else if( token[1] == '*')
            {
                printf("%s \t is not token\n", token);
                nTkn++;
            }
        }
        else if(token[0] == '\n'){
            tkn--;
        }
         else if(token[0]>='0' && token[0]<='9'){
        int i=1;
            while(token[i]>='0' && token[i]<='9'){
                i++;
            }
             if(token[i]>='a' && token[i] <= 'z'){
                printf("%s \t is not token\n", token);
                nTkn++;
            }
            else if(token[i]>='A' && token[i] <='Z'){
                printf("%s \t is not token\n", token);
                nTkn++;
            }
            else{
                printf("%s \t is number\n", token);
                //identify(token);
                tkn++;
            }
        }

        else
        {
            //printf("%s \tis token\n", token);
            identify(token);
            tkn++;
        }
        token = strtok(NULL, " ");
    }
    printf("\n\nNo of token: %d\nNot token: %d\n", tkn, nTkn);
    return 0;
}

void identify(char *token)
{
    if(token[0]=='/'||token[0]>='0'&&token[0]<='9'){
            if(token[1]=='/'||token[1]>='a' && token[1]<='z'||token[1]>='A' && token[1]<='Z'){
                printf("%s\t is not a token\n",token);
            }
            else if(token[1]=='*'){
                printf("%s\t is not a token\n",token);
           }
           else{
                printf("%s\t is Number\n",token);
           }
        }
        else if(token[0]>='a' && token[0]<='z'||token[0]>='A' && token[0]<='Z'){
            if(token[1]>='a' && token[1]<='z'||token[1]>='A' && token[1]<='Z'){
                    if(strcmp(token,"int")==0||strcmp(token,"float")==0||strcmp(token,"main")==0||strcmp(token,"double")==0||strcmp(token,"break")==0||
                       strcmp(token,"case")==0||strcmp(token,"char")==0||strcmp(token,"const")==0||strcmp(token,"continue")==0||
                       strcmp(token,"default")==0||strcmp(token,"do")==0||strcmp(token,"else")==0||strcmp(token,"for")==0||
                       strcmp(token,"if")==0||strcmp(token,"while")==0||strcmp(token,"long")==0||strcmp(token,"void")==0)
                       {

                        printf("%s\t is a Keyword\n",token);

                    }else{
                        printf("%s\t is a String\n",token);
                    }
             }
             else{
                printf("%s\t is a Identifier\n",token);
             }
        }
        else if(strcmp(token,"`")==0||strcmp(token,"$")==0||strcmp(token,"=")==0||strcmp(token,"@")==0||strcmp(token,"#")==0||
                strcmp(token,"^")==0||strcmp(token,"&")==0||strcmp(token,"(")==0||strcmp(token,")")==0||strcmp(token,";")==0||
                strcmp(token,",")==0||strcmp(token,"?")==0||strcmp(token,"|")==0||strcmp(token,"{")==0||strcmp(token,"}")==0||
                strcmp(token,"[")==0||strcmp(token,"]")==0||strcmp(token,".")==0||strcmp(token,"!")==0){
            printf("%s\t is a Symbol\n",token);
        }

        else if(strcmp(token,"+")==0||strcmp(token,"-")==0||strcmp(token,"*")==0||strcmp(token,"%")==0){
            printf("%s\t is a Operator\n",token);
        }
    return 0;
}

