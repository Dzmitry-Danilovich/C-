#include <iostream>
#include <cmath>
#include <random>
using namespace std;


int main(){
    int a[10][10], b[10][10], c[10][10];
    
    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            a[i][j] = 1;
        }
    }

    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << a[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            b[i][j] = 2;
        }
    }

    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << b[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            c[i][j] = b[i][j] + a[i][j];
        }
    }

    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << c[i][j];
        }
        cout << endl;
    }
}
