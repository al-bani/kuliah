#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j;
    int arr[2][2] = {{66,63},{68,69}};

    for (i=0; i < 2; i++){
        for (j=0; j<2; j++){
            printf("%d", arr[i][j]);
        }
    }

    return 0;
}
