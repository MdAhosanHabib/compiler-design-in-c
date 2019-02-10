#include <stdio.h>
#include<string.h>
int main()
{
    int i,k = 0;
    char str[100];
    printf("Enter string for a(b|c)*d ");
    gets(str);

    int l = strlen(str);
    if(str[0] == 'a' && str[l-1] =='d' && str[l-2] == 'b'){
        for(i= 1; i < l-1; i++){
            if(l==2){
                printf("String Accepted\n");
                break;
            }else if(str[i] != 'b'){

                printf("String not Accepted\n");
                k=1;
                break;
            }
        }
        if(k==0){
            printf("String Accepted\n");
        }
    }
    else if(str[0] == 'a' && str[l-1] =='d' && str[l-2] == 'c'){
        for(i= 1; i < l-1; i++){
            if(l==2){
                printf("String Accepted\n");
                break;
            }else if(str[i] != 'c'){

                printf("String not Accepted\n");
                k=1;
                break;
            }
        }
        if(k==0){
            printf("String Accepted\n");
        }
    }

    return 0;
}
