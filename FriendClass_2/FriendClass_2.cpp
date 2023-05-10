

#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    string nama;
public:
    friend void setNama(mahasiswa& a, string);

};
void setNama(mahasiswa& a, string pNama) {
    a.nama = pNama;
    cout << "NAMA : " << a.nama;
}

int main()
{
    mahasiswa mhs;
    setNama(mhs, " Joko Kuwat");
    cout << endl;
    system("pause");
    return 0;
}


