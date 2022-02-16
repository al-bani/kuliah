#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j;
    char arr[3][3][10] = {{"Hijau","kuning","biru"},{"merah", "ungu", "pink"},{"hitam", "putih", "orange"}};

    for (i=0; i < 3; i++){
        for (j=0; j<3; j++){
            printf("%s ", arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}