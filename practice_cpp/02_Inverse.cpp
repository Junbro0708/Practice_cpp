//
//  02_class_ab.cpp
//  practice_cpp
//
//  Created by 박준형 on 2020/08/09.
//  Copyright © 2020 박준형. All rights reserved.
//

#include <iostream>

using namespace std;

class Inverse {
private:
    int num;
    
public:
    void Solution();
};

void Inverse::Solution() {
    cout << "Input : ";
    cin >> num;
    cout << "Output : ";
    
    while(num != 0) {
        if (num < 0) {
            num *= -1;
            cout << "-";
        }
        int pop = num % 10;
        num = num / 10;
        if(pop != 0) {
        cout << pop;
        }
    }
    cout << endl;
}

int main() {
    Inverse a;
    a.Solution();
}
