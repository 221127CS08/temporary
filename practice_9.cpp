//
//  main.cpp
//  9
//
//  Created by Mukhammadrasul Akramhujaev on 25/11/22.
//

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {

    int size; cin >> size;
    vector<int> power;
    
    int n;
    
    for (int i = 0; i < size; i++) {
        cin >> n;
        power.push_back(n);
        cout << pow(power[i], 3) << " ";
    }
    return 0;
}
