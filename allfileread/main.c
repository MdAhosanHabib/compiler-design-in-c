#include <stdio.h>
#include <stdlib.h>
int main(){
    char ch;
    FILE * fp;


    fp = fopen("rakib.txt", "r");

    if(fp == NULL){
            perror("Error while opening the file.\n");
            exit(EXIT_FAILURE);
    }

    printf("The content of %s file are:\n\n", "rakib.txt");

    while((ch = fgetc(fp)) != EOF)

        printf("%c",ch);
        printf("\n\n");

        fclose(fp);
        return 0;
}
