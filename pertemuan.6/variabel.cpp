#include <iostream>
using namespace std;

string namaglobal = "ilmu";

void namavariabel(){
    string namalokal = " komputer";

    //coba akses
    cout << namalokal << endl; // bisa diakses di dalam fungsi namavariabel

    //coba akses
    cout << namaglobal << endl; // bisa diakses di dalam fungsi namavariabel
}
int main(){

    namavariabel();

    //coba akses
    cout << namaglobal << endl;

    //coba akses
    // cout << namalokal << endl; // error, namalokal tidak dapat diakses di luar fungsi namavariabel

}