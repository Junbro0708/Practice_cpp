//
//  07_class.cpp
//  practice_cpp
//
//  Created by 박준형 on 2020/08/15.
//  Copyright © 2020 박준형. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

// 생성자 : 객체가 생설될 때 자동으로 호출되는 함수
// 소멸자 : 객체가 소멸될 때 자동으로 호출되는 함수

class Myclass {
public:
    Myclass() { // 생성자
        cout << "생성자가 호출되었다." << endl;
    }
    ~Myclass() { // 소멸자
        cout << "소멸자가 호출되었다." << endl;
    } // 생성자나 소멸자를 굳이 생설해주지 않아도 프로그램 상에서는 디폴트 생성자와 소멸자가 호출됨 (안에 내용이 없을 뿐)
};

Myclass globalObj; // 전역 변수

void testLocalObj() {
    cout << "로컬오브젝트 시작" << endl;
    Myclass localObj; // 지역 변수
    cout << "로컬오브젝트 끝" << endl;
}

int main() {
    cout << "메인 함수 시작" << endl;
    testLocalObj();
    cout << "메인 함수 끝" << endl;
}
