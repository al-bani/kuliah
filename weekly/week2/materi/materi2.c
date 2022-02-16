#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j;
    int arr[4][4] = {{45,23,21,46},{67,34,56,77},{72,65,34,22},{21,43,67,78}};

    for (i=0; i < 2; i++){
        for (j=0; j<2; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}