#include <stdio.h>

int main(){
    int nilai1, nilai2;
    int operasi, hasil;

    printf("nilai 1 :"); scanf("%d", &nilai1);
    printf("nilai 1 :"); scanf("%d", &nilai2);

    printf("Pilih operasi\n1: penjumlah\n2: pengurangan\n3: perkalian\n4: pembagian\n\n");  scanf("%d", &operasi);

    if (operasi == 1){
        hasil = nilai1+nilai2;

    } else if (operasi == 2){
        hasil = nilai1-nilai2;

    }else if (operasi == 3){
        hasil = nilai1*nilai2;

    }else if (operasi == 4){
        hasil = nilai1/nilai2;

    }

    printf("hasilnya : %d", hasil);

    return 0;
}

/*****************************

#include <stdio.h>

int main(){
    int perkuliahan,uas,uts,nilai_akhir;

    printf("perkuliahan :"); scanf("%d", &perkuliahan); 
    printf("uas :"); scanf("%d", &uas);
    printf("uts :"); scanf("%d", &uts);

    perkuliahan = perkuliahan * 70/100;
    uts = uts * 20/100;
    uas = uas * 10/100;

    nilai_akhir = perkuliahan+uts+uas;

    printf("hasilnya : %d", nilai_akhir);

    return 0;
}
/*******************************
