#include <stdio.h>

int main() {
    int menu;
    float nilai1, nilai2;
    while(menu == menu) {
    printf("\nPilih Program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
    printf("Masukkan Pilihan: ");
    scanf("%d", &menu);
    if(menu == 5) {
        printf("Terimakasih, telah menggunakan kalkulator Shandy");
        break;
    }
    else if(menu > 5) {
        printf("Input anda salah, silahkan coba lagi");
        continue;
    }
    printf("Masukkan nilai pertama: ");
    scanf("%f", &nilai1);
    printf("Masukkan nilai kedua: ");
    scanf("%f", &nilai2);
    if(menu == 1){
        printf("Hasil pertambahan antara %.2f dengan %.2f adalah %.2f", nilai1, nilai2, nilai1 + nilai2);
    }
    else if(menu == 2){
        printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f", nilai1, nilai2, nilai1 - nilai2);
    }
    else if(menu == 3){
        printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f", nilai1, nilai2, nilai1 * nilai2);
    }
    else if(menu == 4){
        printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f", nilai1, nilai2, nilai1 / nilai2);
    }}
    return 0;
}