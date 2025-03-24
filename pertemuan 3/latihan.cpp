#include <iostream>
using namespace std;

int main() {
    int number;

  
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> number;

    if (number % 10 == 0) {
        cout << number << " adalah kelipatan dari 10." << endl;
    } else if (number % 5 == 0) {
        cout << number << " adalah kelipatan dari 5." << endl;
    } else {
        cout << number << " bukan kelipatan dari 5 maupun 10." << endl;
    }

    return 0;
}