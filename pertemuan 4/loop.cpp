#include<iostream>
using namespace std;

int main() {
    // goto label
    //contoh urutan data yang diberikan: hello world, fasilkom-ti, ilmu komputer, iklc
    //-> output yang diharapkan: hello world, iklc, ilmu komputer, fasilkom-ti

// a:
//     cout << "hello world" << endl;
//     goto d;
// b: 
//     cout << "fasilkom-TI" << endl;
//     return 0;
// c:
//     cout << "ilmu komputer" << endl;
//     goto b;
// d:
//     cout << "IKLC" << endl;
//     goto c;

//menampilkan bilangan genap 1 -> 10 dengan goto
// int i = 10;
//     genap:
//     if( i%2 == 0) {
//         cout << i <<" "; }
//         i--;
//     if( i >= 2) {
//         goto genap;
//     }

//statement while
// int i = 1;
// while (i <= 10){
//     if( i % 2 ==0){
//         cout << i << " ";
//     } i++;
// }

//statement do while
// int i =1;
// do {
//     cout << i << endl;
//     i++;
//     } while (i <= 10);

//satement for
//for(inisialisasi; kondisi; increment/decrement)
// for (int i = 1; i <= 10; i+=2){
//         cout << "hello world" << endl;
//     }

///nested for
// for (int i = 1; i <= 5; i++){
//     for (int j = 1; j <= 5; j++){
//         cout << "*  ";
//     } cout << endl;
// }

//segitiga siku-siku
// for (int i = 1; i <= 5; i++){
//     for (int j = 1; j <= i; j++){
//         cout << "* ";
//     } cout << endl;
// }
}