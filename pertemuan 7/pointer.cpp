#include <iostream>
using namespace std;

void penjumlahan(int a, int b){
    cout << a + b << endl;
}

void penjumlahanpointer(int *a, int *b){
    *a += *b;
    cout << *a << endl;
}
int main(){
    system("cls");

    //pointer declaration
    // int num = 35;
    // int *pointer_number = &num;

//     cout << "isi variabel number = " << num << endl; // 35
//     cout << "alamat dari variabel number = " << &num << endl; 
//     cout << "isi variabel pointer_number = " << pointer_number << endl; 
//     cout << "isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
//     cout << "alamat memori variabel pointer_number = " << &pointer_number << endl;


    //pointer operation
    // *pointer_number = 25;
    //     cout << "isi variabel number = " << num << endl; // 35
    //     cout << "alamat dari variabel number = " << &num << endl; 
    //     cout << "isi variabel pointer_number = " << pointer_number << endl; 
    //     cout << "isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    //     cout << "alamat memori variabel pointer_number = " << &pointer_number << endl;




    //pointer array
    int num[] = {1, 2, 3, 4, 5};
    int *pointer_num = num;
    // cout << "isi variabel number = " << num[0] << endl;
    // cout << "alamat dari memori variabel num = " << &num[3] << endl;
    // cout << "isi variabel pointer_num = " << pointer_num << endl;
    // cout << "isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    // cout << "alamat memori variabel pointer_num = " << &pointer_num << endl;
    // cout << endl;

    // *pointer_num += 5;
    // cout << "isi variabel number = " << num[0] << endl;
    // cout << "alamat dari memori variabel num = " << &num[3] << endl;
    // cout << "isi variabel pointer_num = " << pointer_num << endl;
    // cout << "isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    // cout << "alamat memori variabel pointer_num = " << &pointer_num << endl;
    // cout << endl;


    //pointer in parameter
    // int num1 = 5;
    // int num2 = 7;
    // penjumlahan(num1, num2);
    // cout << num1 << endl;
    // cout << num2 << endl;

    // penjumlahanpointer(&num1, &num2);
    // cout << num1 << endl;
    // cout << num2 << endl;


    //pointer in pointer
    // int score = 4;
    // int *pointer_score = &score;
    // int **ptr_pointer_score = &pointer_score; //pointer in pointer
    // cout << "isi variabel score = " << score << " alamat memorinya " << &score << endl; 
    // cout << "isi variabel pointer_score " << pointer_score << " dan isi variabel yang ditunjuk oleh pointer_score " << *pointer_score << " alamat memori pointer_score " << &pointer_score << endl;
    // cout << "isi variabel ptr_pointer_score " << ptr_pointer_score << " dan isi variabel yang ditunjuk oleh ptr_pointer_score " << **ptr_pointer_score << " alamat memori pointer_score " << &ptr_pointer_score << endl;


    //dinamic pointer
    int *ptr = new int; 
    *ptr = 30;
    cout << "isi variabel ptr = " << *ptr << " dan alamat " << &ptr << endl; 

    delete ptr;
    cout << "isi variabel ptr = " << *ptr << " dan alamat " << &ptr << endl;  
}