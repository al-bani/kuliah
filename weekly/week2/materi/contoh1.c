#include <stdio.h>

int main(){
    int i, n, nilai_rata, total = 0;
    printf("Masukkan jumlah = "); scanf("%d", &n);
    int num[n];

    for (i = 0; i < n; i++){
        printf("Masukkan Nilai ke %d = ", i+1);  scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++){
        total += num[i];
        printf("Nilai ke %d adalah = %d\n", i+1, num[i]);
    }

    printf("total = %d\n", total);
    nilai_rata = total/n;
    printf("nilai rata rata = %d", nilai_rata);

    return 0;
}