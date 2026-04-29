#include <iostream>
#include <cmath>
using namespace std;


int main(){
	float PI = 3.14159;
    double r = 0;

    cout << "Podaj wartosc promienia: ";
    cin >> r;

    cout << "Pole kola: " << round((PI * r * r) * 100) / 100 << endl;
}
