

#include <iostream>
using namespace std;

class mahasiswa {
public:
    int nim;
    void showNim();
};
coid mahasiswa::showNim() {
    cout << " No Induk = " << nim << endl;
}

int main()
{
    std::cout << "Hello World!\n";
}

