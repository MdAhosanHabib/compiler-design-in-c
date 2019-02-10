#include <stdio.h>
#include <string.h>
int main()
{
     int i, j, l;
     char data[100];
     printf("Program for implement NFA of language ab*\n\n Enter input string:\n ");
      scanf("%s", data);
      l =strlen(data);
    if ((data[0]=='a') &&l ==1){
            printf ("Your stirng accept!");
            return 0;
      } else if (data[0]== 'a'){
           for (i=1 ; i<l; i++)
            {
                if (data[i] != 'b'){
                        printf("Your stirng not accept!");
                        return 0;
                        }
            }
    printf("Your stirng accept!");
    return 0;
                }
    else {
        printf(" Your stirng not accept!");
    return 0;
    }
}
