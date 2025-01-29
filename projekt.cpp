#include <iostream>
using namespace std;

bool czy_pierwsza(int liczba) {
    if (liczba <= 1) return false;
    for (int i = 2; i * i <= liczba; ++i) {
        if (liczba % i == 0) return false;
    }
    return true;
}

int main() {
    int liczba;
    cin >> liczba;
    cout << "Wczytana liczba: " << liczba << endl;
    if (czy_pierwsza(liczba)) {
        cout << "Liczba jest pierwsza." << endl;
    } else {
        cout << "Liczba nie jest pierwsza." << endl;
    }
    return 0;
}
