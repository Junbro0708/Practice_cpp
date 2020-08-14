//
//  06_this.cpp
//  practice_cpp
//
//  Created by 박준형 on 2020/08/14.
//  Copyright © 2020 박준형. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

// this는 자기 자신을 가리키는 포인터
// 클래스나 구조체 안에 있는 모든 멤버 함수나 변수들은 전부 this포인터를 보이지 않는 매개변수 형태로 받고 있다.
class myClass {
public:
    void PrintThis() {
        cout << "나의 주소는" << this << endl; // 소속되어 있는 객체의 주소를 가리킴
    }
    /* 만약 this가 없다고 가정할 때에는
    void PrintThis(myClass *ptr) {
        cout << "나의 주소는" << ptr << endl;
    }*/
};

int main() {
    myClass a, b;
    
    cout << "a의 주소는" << &a << endl;
    cout << "b의 주소는" << &b << endl;
    
    a.PrintThis();
    b.PrintThis();
    /*
    a.PrintThis(&a);
    b.PrintThis(&b);
    */
}
