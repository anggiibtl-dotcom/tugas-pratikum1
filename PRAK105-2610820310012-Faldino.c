#include<stdio.h>
int main() {
    int a = 9;
    int b = 5;
    int x = 8;
    int y = 8;

    int sisa_a_b = a % b;
    int sisa_x_y = x % y;
    int total_sisa = sisa_a_b + sisa_x_y;

    printf("variabel a bernilai %d\n", a);
    printf("variabel b bernilai %d\n", b);
    printf("variabel x bernilai %d\n", x);
    printf("variabel y bernilai %d\n", y);
    printf("total sisa dari a dibagi b ditambah x dibagi y adalah %d\n", total_sisa);
return 0;
}