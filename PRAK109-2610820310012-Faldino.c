#include<stdio.h>
int main() {
    int jumlah_pasukan = 958730;
    int jumlah_pahlawan = 5;
    int jumlah_per_pahlawan = jumlah_pasukan / jumlah_pahlawan;

    printf("jumlah pasukan yang dibawa Yu Zhong = %d\n", jumlah_pasukan);
    printf("jumlah pahlawan = %d\n", jumlah_pahlawan);
    printf("jumlah yang harus dikalahkan setiap pahlawan = %d pasukan\n", jumlah_per_pahlawan);

    return 0;
}