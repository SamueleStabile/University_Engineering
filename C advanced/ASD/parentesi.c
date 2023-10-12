#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int parentesi(char *string);

int main(int argc, char **argv){
    
    char string[100];
    if (argc == 2)
    {
        strcpy(string, argv[1]);
        printf("%s\n", string);
    }else{
        printf("Inserire Parola in riga di comando");
        return 1;   
    }

    int n = strlen(string);

    printf("%d\n", parentesi(string));

}

int parentesi(char *string){

    int counter=0;
    while (*string != '\0'){
        if (*string == '(')
            counter++;
        else if (*string == ')'){
            if (counter < 1)
                return 1;
            counter--;
        }
        string++;
    }
    return counter;
}
    
