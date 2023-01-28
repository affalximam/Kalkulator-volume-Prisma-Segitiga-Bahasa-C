#include <stdio.h>
#include <stdlib.h>

void clear(){
    // linux
    // system("clear");
    
    // windows
    system("cls");
}

int main(){

    float alasSegitiga, tinggiSegitiga, panjangPrisma, hasil;
    char ulang;
    
    top:
    clear();
    printf("\n--------------------------------------------\n");
    printf("Kalkulator menghitung Volume Prisma Segitiga\n");
    printf("By : AFFALXIMAM\n");
    printf("--------------------------------------------\n\n");

    printf("Masukan Panjang Alas Segitiga : ");
    scanf(" %f", &alasSegitiga);
    printf("Masukan Tinggi Segitiga : ");
    scanf(" %f", &tinggiSegitiga);
    printf("Masukan Panjang Prisma : ");
    scanf(" %f", &panjangPrisma);

    hasil = (alasSegitiga * tinggiSegitiga / 2) * panjangPrisma;
    printf("Volume Prisma adalah : %.2f \n\n", hasil);

    cek:
    printf("Apakah ingin mengulang ? (y/t) : ");
    scanf(" %c", &ulang);
        if(ulang == 'y'){
            goto top;
        }
        if(ulang == 't'){
            printf("\nProgram Selesai");
        }
        else{
            goto cek;
        }
    return 0;

}