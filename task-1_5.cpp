#include <iostream>
#include <cmath>
#include <random>
using namespace std;


int main(){
    random_device rd;
    mt19937_64 gen(rd());
    uniform_int_distribution<> dist(1, 100); 
    
    int liczba = dist(gen);
    cout << liczba << endl;

    uniform_real_distribution<> dist(0.0, 1.0);
    float number = dist(gen);
    cout << number << endl;
}
