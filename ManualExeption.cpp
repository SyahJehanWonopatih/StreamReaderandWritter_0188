#include <iostream>
using namespace std;

int main(){
    try {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 3.5; // melemparkan sebuah interger maka
        cout << "Pernyataan tidak akan di eksekusi" << endl;
    }
    catch (int a) {
        // blok ini akan dieksekusi
        cout << a << " : Pengecualian akan dieksekusi" << endl;
    }
    catch (...) {
        /*Jika selain interger maka block ini akan di eksekusi*/
        cout << "default Pengecualian deksekusi" << endl;
    }
    return 0;
}