#include <iostream>
#include <string>
#include<vector>
using namespace std;

struct alamat{
        string jalan;
        string kota;
        string kodepos;

};

struct mahasiswa{
        string nama;
        int umur;
        float ipk;
        alamat alamat; // struct di dalam struct
    };

    int main(){
        system("cls");

        mahasiswa mhs1;
        // mhs1.nama = "adli";
        // mhs1.umur = 19;
        // mhs1.ipk = 4.00;
        // mhs1.alamat.jalan = "jalan kaki";
        // mhs1.alamat.kota = "medan";
        // mhs1.alamat.kodepos = "20155";

        // cout << "alamat = " << mhs1.alamat.jalan <<" " << mhs1.alamat.kota << " " << mhs1.alamat.kota << endl;

      
      
        vector<mahasiswa> mahasiswa;
        int n;
        cout << "masukkan jumlah mahasiswa : ";
        cin >> n;

        for (int i = 0; i < n; i++){
            cout << "mahasiswa " << i + 1 << endl;
            cin.get();
            cout << "masukkan nama : ";
            getline(cin, mhs1.nama);
            cout << "masukkan umur : ";
            cin >> mhs1.umur;
            cout << "masukkan ipk : ";
            cin >> mhs1.ipk;

            mahasiswa.push_back(mhs1);
        }

        for (int i = 0; i < n; i++){
            cout << "mahasiswa " << i + 1 << endl;
            cout << "nama : " << mahasiswa[i].nama << endl;
            cout << "umur : " << mahasiswa[i].umur << endl;
            cout << "ipk : " << mahasiswa[i].ipk << endl;
        }
    }