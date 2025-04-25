#include<iostream>
#include<vector>
using namespace std;

int main(){
    //vektor declaration & initialization
    vector<string> nama_karyawan = {"Alya", "Budi", "aurik", "Eko"};

    //ascending element in vector
    // for (int i = 0; i < nama_karyawan.size(); i++){
    //    cout << nama_karyawan[i] << endl;
    // }

    //for (string karyawan : nama_karyawan){
    //    cout << karyawan << endl;

    //add data to vector
    // nama_karyawan.push_back("imam");
    // for (int i = 0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    //  }

    //remove data from vector
    nama_karyawan.pop_back();
    nama_karyawan.erase(nama_karyawan.begin() + 3); 

    for (int i = 0; i < nama_karyawan.size(); i++){
        cout << nama_karyawan[i] << endl;
     }

}