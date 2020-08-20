//
//  12_namespace.cpp
//  practice_cpp
//
//  Created by 박준형 on 2020/08/20.
//  Copyright © 2020 박준형. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int n = 0;

namespace A {
    int n = 0;
        namespace B {
        void set() {
            n = 10;
        }
        int n = 0;
    }
}
namespace C {
    void set();
    int n = 0;
}
void C::set() {
    n = 20;
}



int main() {
    using namespace A::B;
    set();
    C::set();
    
    cout << ::n <<endl;
    cout << A::n <<endl;
    cout << A::B::n <<endl;
    cout << C::n <<endl;
}
