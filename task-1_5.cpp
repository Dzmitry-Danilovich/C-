#include <iostream>
#include <cmath>
#include <random>
using namespace std;


int main(){
    random_device rd;
    mt19937_64 gen(rd());
    uniform_int_distribution<> dist_INT(1, 100); 
    uniform_real_distribution<> dist_FLOAT(0.0, 1.0);

    int liczba = dist_INT(gen);
    cout << liczba << endl;

    float number = dist_FLOAT(gen);
    cout << number << endl;
}
