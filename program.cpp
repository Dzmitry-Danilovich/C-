#include <iostream>
#include <cmath>
using namespace std;


int main(){
	float a, b, pole;

	cin >> a;
	cin >> b;

	pole = a * b;
	cout << "Pole przed: " << pole << endl;

	cout << "Pole:" << round(pole*100)/100 << endl;

	return 0;
}
