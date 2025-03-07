#include<iostream> //header
#include<conio.h> //header untuk memakai fungsi getch() dan getche()
using namespace std;
int main()
{
    string nama;
    char kom, jeniskelamin;
    int nim;
    float ip;
    cout <<"hello word"<< endl;
    cout <<"masukkan nama anda: ";
        cin >> nama; //input
    getline(cin, nama); //agar input yang dimasukkan bisa memakai spasi
    cout <<"masukkan kom: ";
        cin >> kom;
    cout <<"masukkan nim: ";
        cin >> nim;
    cout <<"masukkan ip: ";
        cin >> ip;
    cout <<"masukkan jenis kelamin (l/p): ";
    jeniskelamin = getche(); //agar karakter langsung tampil tanpa tekan enter

        cout << nama << endl; //output
        cout << kom << endl;
        cout << nim << endl;
        cout << ip << endl;
    putchar(jeniskelamin); //untuk menampilkan jenis kelamin menggunakan fungsi getche
getch(); //karakter yang diketik tapi tidak akan ditampilkan di output
}
