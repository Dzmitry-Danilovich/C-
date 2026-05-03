#include <iostream>
#include <cmath>
#include <random>
#include <vector>
using namespace std;


int main(){
    vector <int> vec;

    for (int i = 0; i < 10; i++){
        vec.push_back(i);
    }

    for (int i = 0; i < 10; i++){
        cout << i << endl;
    }

    vec.push_back(23425);
    
    for (int x: vec){
        cout << x << endl;
    }
}
