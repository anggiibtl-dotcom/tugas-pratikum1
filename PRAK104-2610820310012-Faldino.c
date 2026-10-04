#include<stdio.h>
int main() {
    int harga_sepatu_a = 400000;
    int harga_sepatu_b = 350000;

    printf("Harga A: %d\n", harga_sepatu_a);
    printf("Harga B: %d\n", harga_sepatu_b);

    int harga_akhir_a = harga_sepatu_a - (harga_sepatu_a * 13 / 100);
    int harga_akhir_b = harga_sepatu_b - (harga_sepatu_b * 21 / 100);

    printf("sepatun A mendapatkan diskon 13%% sehingga harga akhir menjadi: %d\n", harga_akhir_a);
    printf("sepatun B mendapatkan diskon 21%% sehingga harga akhir menjadi: %d\n", harga_akhir_b);
    
    return 0;
}