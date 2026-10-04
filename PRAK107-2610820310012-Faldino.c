#include<stdio.h>
int main() {
    int sisi1 = 4;
    int sisi2 = 5;
    int sisi3 = 7;
    int harga_per_meter = 85000;
    int keliling = sisi1 + sisi2 + sisi3;
    int total_harga = keliling * harga_per_meter;

    printf("diketahui\n");
    printf("panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi1, sisi2, sisi3);
    printf("keliling tanah Pak Dengklek adalah %d\n", keliling);
    printf("harga per meter adalah %d\n", harga_per_meter);
    printf("jawaban\n");
    printf("biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", total_harga);

return 0;
}