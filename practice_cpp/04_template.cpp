//
//  04_quiz.cpp
//  practice_cpp
//
//  Created by 박준형 on 2020/08/11.
//  Copyright © 2020 박준형. All rights reserved.
//

#include <stdio.h>
#include <iostream>

//template란 함수나 클래스를 개별적으로 다시 작성하지 않아도, 여러 자료형으로 사용할 수 있도록 만들어 놓는 틀
//template는 함수와 클래스 두 경우로 사용할 수 있다.

using namespace std;

/*
int Sum(int a, int b) {
    return a+b;
}
double Sum(double a, double b) {
    return a+b;
}
//이렇게 함수의 기능은 같지만 자료형이 다른 경우에는 다른 자료형 함수로 두 번 써줄 수 있지만, template를 사용하면 ->
*/

template<typename T>
T Sum(T a, T b) {
    return a+b;
}
//위와 같이 하나의 함수만 정의해주면 된다. (typename , class 둘 다 가능)

template<class T1, class T2>
void printT(T1 a, T2 b) {
    cout << "T1 : " << a << endl;
    cout << "T2 : " << b << endl;
}
//자료형 두개가 다른 경우에는 메인 함수에서 명시를 해주지 않고 컴파일러에서 알아서 판단하게 하면 된다.

int main() {
    int a = 1, b = 5;
    double c = 2.4, d = 5.4;
    string e = "Hello World";
    string f = "Scratch";
    
    cout << Sum<int>(a, b) << endl;
    cout << Sum<double>(c, d) << endl;
    cout << Sum<string>(e, f) << endl;
    
    printT(a, c);
    printT<int, string>(d, f); // 물론 이렇게 해줘도 된다.
}
