//Eduardo Daniel Perez Roman
//Suma de Numeros Naturales

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Suma de numero natural: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "Suma = " << sum;
    return 0;
}