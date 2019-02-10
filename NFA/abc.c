#include <stdio.h>
#include<string.h>
int main()
{
    int i,k = 0;
    char str[100];
    printf("Enter string for ab*  && ab*c ");
    gets(str);

    int l = strlen(str);
    if(str[0] == 'a' && str[l-1] =='c'){
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
      else if(str[0] == 'a'){
        for(i= 1; i <= l-1; i++){
            if(l==1){
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
        }else{
        printf("String not Accepted\n");
    }
}

    return 0;

}
