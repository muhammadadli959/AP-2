#include <iostream>
using namespace std; 

int main(){
    int nilai;
    system("cls");

    cout << "Masukkan nilai: ";
    cin >> nilai;

    //if statement

    // if (nilai <=65){
    //     cout <<"anda tidak lulus";
    // }

//if else statement
    // if (nilai <=65){
    //     cout <<"anda tidak lulus";
    // } else {
    //     cout <<"anda lulus";
    //  }

//if else if statment
    // if(nilai >= 100){
    //     cout << "anda kece" << endl;
    // } else if (nilai <= 65){
    //     cout << "anda tidak lulus" << endl;
    // } else {
    //     cout << "anda lulus" << endl;
    // }

//nested if statement
    //     if (nilai <= 65){
    //         cout << "anda tidak lulus" << endl;
    //     } else {
    //     if (nilai == 100){
    //         cout << "anda lulus dan anda hebat" << endl;
    //     } else {
    //         cout << "anda lulus" << endl;
    //     }
    // }

//switch case statement
    // switch (nilai){
    //     case 1: 
    //         cout << "senin" << endl;
    //         break;
    //     case 2:
    //         cout << "selasa" << endl;
    //         break;
    //     case 3:
    //         cout << "rabu" << endl;
    //         break;
    //     case 4: 
    //         cout << "kamis" << endl;
    //         break;
    //     case 5:
    //         cout << "jumat" << endl;
    //         break;
    //     case 6:
    //         cout << "sabtu" << endl;
    //         break;
    //     case 7:
    //         cout << "minggu" << endl;
    //         break;
    //     default: //untuk membatasi nilai yang sudah disediakan
    //         cout << "inputan anda tidak valid"<< endl;
    //         break;
    // }

// switch range
    // switch (nilai){
    //     case 101 ... 9999: cout << "tidak masuk akal"<< endl; break;
    //     case 85 ... 100:
    //         cout << "nilai anda A"<< endl;
    //         break;
    //     case 80 ... 84:
    //         cout << "nilai anda B+"<< endl;
    //         break;
    //     case 75 ... 79:
    //         cout << "nilai anda B"<< endl;
    //         break;
    //     case 70 ... 74: 
    //         cout << "nilai anda C+"<< endl;
    //         break;
    //     case 65 ... 69:
    //         cout << "nilai anda C"<< endl;
    //         break;
    //     case 60 ... 64:        
    //         cout << "nilai anda D"<< endl;
    //         break;
    //     devault: cout << "E" << endl;
    // }

//ternary operator
    // if (nilai % 2 == 0){
    //     cout << "genap sih" << endl;
    // } else {
    //     cout << "ganjil sih" << endl;
    // }
    // a > 5 ? 9 : 6
    // string cheknum = (nilai % 2 == 0) ? "genap" : "ganjil";
    // cout << nilai << " tuh bilangan " << cheknum << endl;
    return 0;
}