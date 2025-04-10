#include <stdio.h>
#include <string.h>

int main() {
    char s[25];
    
    while (gets(s)) {
        int contieneI = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if(s[i] == 'i'){
                contieneI = 1;
                break;
            }
        }
        if(contieneI == 1){
            printf("\nN");
        }else{
            printf("\nS");
        }
    }

    return 0;
}