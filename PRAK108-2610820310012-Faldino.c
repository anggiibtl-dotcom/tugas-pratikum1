#include<stdio.h>
int main() {
    int putaran = 5;
    int jarak = 14;
    
    float pi = 3.14159264;
    
    float keliling = (float)jarak / putaran;
    
    float diameter = keliling / pi;
    float jari_jari = keliling / (2 * pi);

    printf("diketahui\n");
    printf("Pak Dengklek mengelilingi taman = %d putaran\n", putaran);
    printf("jarak yang ditempuh Pak Dengklek = %d kilometer\n", jarak);
    printf("\n");
    printf("jawaban\n");
    printf("Jari-jari yang dikelilingi Pak Dengklek adalah %.2f kilometer\n", jari_jari);

    return 0;
}