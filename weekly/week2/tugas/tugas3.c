#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,n_baris,n_kolom;
    printf("Masukkan Baris : ");  scanf("%d", &n_baris);
    printf("Masukkan kolom : ");  scanf("%d", &n_kolom);
    int arr[n_baris][n_kolom];

    for (i=0; i < n_baris; i++){
        for (j=0; j < n_kolom; j++){
            printf("Masukkan indeks ke [%d][%d] : ", i,j);    scanf("%d", &arr[i][j]);
        }
    }
    
    printf("\nHasil Inputan !\n");
    for (i=0; i < n_baris; i++){
        for (j=0; j < n_kolom; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}