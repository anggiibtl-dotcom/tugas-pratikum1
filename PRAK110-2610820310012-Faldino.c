#include<stdio.h>
#include<math.h>
int main() {
    int alas = 5;
    int tinggi = 12;
    int sisi_a = tinggi;
    int sisi_c = alas;
    int sisi_b = (int)sqrt((sisi_a * sisi_a) + (sisi_c * sisi_c));
    
    int keliling = sisi_a + sisi_b + sisi_c;
    int luas = (int)(0.5 * alas * tinggi);

    printf("diketahui\n");
    printf("alas = %d cm\n", alas);
    printf("tinggi = %d cm\n", tinggi);
    printf("\n");
    printf("jawaban\n");
    printf("sisi A = %d cm\n", sisi_a);
    printf("sisi B = %d cm\n", sisi_b);
    printf("sisi C = %d cm\n", sisi_c);
    printf("keliling = %d cm\n", keliling);
    printf("luas = %d cm\n", luas);

return 0;
}