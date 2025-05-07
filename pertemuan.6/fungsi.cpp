#include<iostream>
using namespace std;

//fungsi tanpa nilai balikan
void tampilkanpesan(){
    cout << "=====Selamat datang di AP 2=====" << endl;
}

//fungsi dengan nilai balikan
int tambah(int a, int b) {
    return a + b;
}

//fungsi overload
int kali(int a, int b) {
    return a * b;
}

double kali(double a, double b) {
    return a * b;
}

//fungsi rekursif
int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }   
}

int main() {
    system("cls");
    // menggunakan fungsi tanpa nilai balikan
    tampilkanpesan();

    int x = 5, y = 3; 
    // fungsi dengan balikan/hasil
    int hasil = tambah(x, y);
    cout << "Hasil penjumlahan : " << x << " + " << y << " = " << hasil << endl;

    // menggunakan fungsi overload
    int hasilkaliint = kali(x, y);
    double hasilkalidouble = (5.5, 2.0);

    cout << "Hasil perkalian (int) : "<< hasilkaliint << endl;
    cout << "Hasil perkalian (double) : "<< hasilkalidouble << endl;

    // menggunakan fungsi rekursif
    int angka = 5;
    cout << "faktorial dari " << angka << " adalah " << faktorial(angka) << endl;
}