#include<iostream>
using namespace std;

class contohAkses{
    private:
        int privateVar;

    protected:
        int protectedVar;
    
    public:
        int publicVar;

        //constructor
        contohAkses(){
            privateVar = 1;
            protectedVar = 2;
            publicVar = 3;
        }

        void tampilkansemua(){
            cout << "aksses dari dalam class : " << endl;
            cout << privateVar << endl;
            cout << protectedVar << endl;
            cout << publicVar << endl;
        }
};

// kelas turunan  
class turunan : public contohAkses{
    public: 
        void aksesProtected() {
            cout << "akses publicVar: " << publicVar << endl;
            cout << "akses protectedVar: " << protectedVar << endl;
        }
};

int main(){

    contohAkses obj;
    obj.tampilkansemua();

    cout << "aksses dari luar class : " << endl;
    cout << obj.publicVar << endl;
    // cout << obj.protectedVar << endl; 
    // cout << obj.privateVar << endl;

    turunan tur;
    tur.aksesProtected();
}