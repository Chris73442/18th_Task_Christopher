#include <stdio.h>

// Fungsi untuk input jari-jari
float inputJariJari() {
    float r;
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &r);
    return r;
}

// Fungsi untuk menghitung luas
float hitungLuas(float r, float pi) {
    return pi * r * r;
}

// Fungsi untuk menghitung keliling
float hitungKeliling(float r, float pi) {
    return 2 * pi * r;
}

int main() {
    float pi = 3.14159;  // Simpan nilai pi di main sebagai float

    float r = inputJariJari();
    float luas = hitungLuas(r, pi);
    float keliling = hitungKeliling(r, pi);

    printf("Luas lingkaran = %.2f\n", luas);
    printf("Keliling lingkaran = %.2f\n", keliling);

    return 0;
}

