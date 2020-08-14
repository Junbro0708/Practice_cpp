//
//  07_const_dest_application.cpp
//  practice_cpp
//
//  Created by 박준형 on 2020/08/15.
//  Copyright © 2020 박준형. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

// 생성자는 객체가 생성이 되는 순간 멤버 변수를 초기화할 때 많이 활용이 된다.
// 소멸자는 메모리를 해제하는데 많이 사용된다. (생성자보다는 덜 쓰임)

// 복소수를 저장하는 클래스 (실수부real와 허수부imag를 저장하는 클래스)
class Complex {
public:
    Complex() {
        real = 0;
        imag = 0;
    }
    Complex(double real_, double imag_) {
        real = real_;
        imag = imag_;
    } // 생성자 오버로딩
    
    double GetReal() {
        return real;
    }
    void SetReal(double real_) {
        real = real_;
    } // 게터와 세터함수는 캡슐화에서 자주 쓰인다.
    
    double GetImag() {
        return imag;
    }
    void SetImag(double imag_) {
        imag = imag_;
    }
private:
    double real; // 실수부
    double imag; // 허수부
};

int main() {
    Complex c1;
    Complex c2 = Complex(2, 3);
    // 위와 같은 표현 Complex c3(2, 3);
    // 이것도 같은 표현 Complex c3 = {2, 3};
    
    cout << "c1은 " << c1.GetReal() << ", " << c1.GetImag() << endl;
    cout << "c2은 " << c2.GetReal() << ", " << c2.GetImag() << endl;
}
