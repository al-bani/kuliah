#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j;
    int a[2][2] = {{6,7},{7,8}};
    int b[2][2] = {{1,3},{4,-1}};
    int hasil[2][2];

    for (i=0; i < 2; i++){
        for (j=0; j<2; j++){
            hasil[i][j] = a[i][j] + b[i][j];
            printf("%d ",hasil[i][j]);
        }
        printf("\n");
    }



    return 0;
}