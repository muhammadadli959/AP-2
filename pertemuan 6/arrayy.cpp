#include <iostream>
#include<array>
using namespace std;

int main() {
    //array declaration & initialization
    //2 cara membuat array

    // cara 1 array kosong
    // string nama{5};
    // nama[0] = "Alya"
    // nama[1] = "Budi";
    // nama[2] = "Cindy";          
    // nama[3] = "Diana";
    // nama[4] = "Eko";

    // cara 2 array langsung diisi
    // string nama[5] = {"Alya", "Budi", "Cindy", "Diana", "Eko"};
    // string nama[] = {"Alya", "Budi", "Cindy", "Diana", "Eko"}; 

    //ascending element in array
    // cout <<nama[0] << endl;
    // cout <<nama[1] << endl;
    // cout <<nama[2] << endl;
    // cout <<nama[3] << endl;
    // cout <<nama[4] << endl;

    // menggunakan looping
    // for (int i = 0; i < 5; i++){
    //     cout << nama[i] << endl;
    // }

    //descending element in array use looping
    // for (int i = 4; i >= 0; i--){
    //     cout << nama[i] << endl;
    // }

    //multidimensional array
    // 1 3 5 
    // 2 4 6 

    // int matrix[2][3] = { {1, 3, 5}, {2, 4, 6} };
    // for(int i = 0 ; i < 2; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //string array
    // string nama = "adli";
    // cout << nama[0] << endl; 
    // cout << nama[2] << endl;

    // for(int i = 0; i < nama.length(); i++){
    //     cout << nama[i] << endl;
    // }

    // string s1 = "hello";
    // string s2 = "world";
    /*1. s1 = s2*/
    // s1 = s2; 
    // cout << "s1 = " << s1 << endl; 

    /*2. s1 = s1 + s2*/
    // s1 = "hello"; // reset nilai di s1
    // cout << "hasil : " << s1 + s2 << endl;

    /*3. s1. length()*/
    // cout << s1.length() << endl;
    // cout << (s1 + s2).length() << endl; 

    /*4. s1. subrst(n, m)*/
    // cout << s1.substr(2, 3) << endl; 
    // cout << (s1 + s2). substr(5, 3) << endl;

    // operator sizeof
    // int angka = 10;
    // cout << sizeof(angka);
    
    // int nilai[] = (10, 20, 30, 40, 50);
    // cout << sizeof(nilai);

    // string s1 = "alya";
    // cout << sizeof(s);

    // array library
    array<float, 5> nilai = {87.5, 90, 100, 95.7, 78.3};
    cout << "nilai : ";

    // for (int i = 0; i < nilai.size(); i++){
    //     cout << nilai[i] << " ";
    // }

    // for (float n : nilai){
    //     cout << n << " ";    
    // }
    
    return 0;
}