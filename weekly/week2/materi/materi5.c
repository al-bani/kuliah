
#include<stdio.h>
#include<stdlib.h>

int main(){

    int nilai[2][2][3];
    int i,x,y;

    for(i=0;i<2;i++){
    for(x=0;x<2;x++){
        for(y=0;y<4;y++){
           printf("Input Index [%d][%d][%d] = ",i,x,y); scanf("%d",&nilai[i][x][y]);
        }
   }

   }
    for(i=0;i<2;i++){
    for(x=0;x<2;x++){
        for(y=0;y<4;y++){
       printf("Hasil indeks [%d][%d][%d] = %d\n",i,x,y,nilai[i][x][y]);
    }
    }
    }

   return 0; 
}