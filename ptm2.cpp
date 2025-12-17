#include <stdio.h>

int main() {
    // Mendefinisikan nilai pi
    float pi = 3.14;
    float r, volume, luas;

    // Meminta input dari pengguna untuk jari-jari
    printf("Masukkan jari-jari bola: ");
    scanf("%f", &r);

    // Menghitung volume bola
    volume = (4.0 / 3.0) * pi * r * r * r;

    // Menghitung luas permukaan bola
    luas = 4.0 * pi * r * r;

    // Menampilkan hasil
    printf("Volume bola: %.2f\n", volume);
    printf("Luas permukaan bola: %.2f\n", luas);

    return 0;
}