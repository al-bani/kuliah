#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j;
    char negara[4][4][10] = {{"indonesia","jakarta"},{"Filipina","Manilla"},{"Austria","wina"},{"india","new Delhi"}};

    for (i=0; i < 4; i++){
        for (j=0; j<4; j++){
            printf("%s ", negara[i][j]);
        }
        printf("\n");
    }

    return 0;
}
