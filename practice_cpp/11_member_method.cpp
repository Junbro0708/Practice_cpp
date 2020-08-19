//
//  11_vector.cpp
//  practice_cpp
//
//  Created by 박준형 on 2020/08/19.
//  Copyright © 2020 박준형. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

// 멤버 메서드는 대부분 선언과 정의를 분리한다. (어떤 함수가 다른 함수를 사용할 때 선언과 정의를 같이 하면 위의 함수가 밑의 함수를 알아볼 수 없기 때문)

class Vector2 {
public:
    Vector2();
    Vector2(float x, float y);
    
    float GetX() const;
    float GetY() const;
    
    
    /*Vector2 Add(Vector2 rhs) { // rhs는 우변을 얘기함
        return Vector2(x+rhs.x, y+rhs.y);
    } // 동적이라 특정한 객체에 포함되어있기 때문에 자기자신과 우변 필요*/
    
    Vector2 operator+(const Vector2 rhs) const; // rhs는 우변을 얘기함, 자기 자신이 바뀌지 않는다면 const를 쓸 수 있고, const를 쓸 수 있다면 최대한 쓰는 것이 좋음
    Vector2 operator-(const Vector2 rhs) const;
    Vector2 operator*(const float rhs) const;
    float operator*(const Vector2 rhs) const;
    Vector2 operator/(const float rhs) const;
        
    
    
private:
    float x;
    float y;
};

Vector2 Sum(Vector2 a, Vector2 b) {
    return Vector2(a.GetX()+b.GetX(), a.GetY()+b.GetY());
}


int main() {
    Vector2 a(2, 3);
    Vector2 b(-1, 4);
    //Vector2 c = a + b; 우리는 이해할 수 있지만, 컴퓨터는 이해 불가 오류
    Vector2 c1 = Sum(a, b);
    Vector2 c2 = a * 1.6; //이렇게 매서드 형태로도 사용이 가능하고, 아래처럼 연산자형태로도 사용 가능 (두 항을 바꿔주면 오류가남 -> 기본연산자는 연산자 오버로딩이 불가능)
    Vector2 c3 = a - b; //operator 연산자를 사용하면 a+b가 된다. (연산자 오버로딩)
    float c4 = a * b;
    
    cout << a.GetX() << ", " << a.GetY() << endl;
    cout << b.GetX() << ", " << b.GetY() << endl;
    cout << c1.GetX() << ", " << c1.GetY() << endl;
    cout << c2.GetX() << ", " << c2.GetY() << endl;
    cout << c3.GetX() << ", " << c3.GetY() << endl;
    cout << c4 << endl;
    
}

Vector2::Vector2():x(0), y(0) {}
Vector2::Vector2(float x, float y):x(x), y(y) {}

float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }

Vector2 Vector2::operator+(const Vector2 rhs) const {
    return Vector2(x+rhs.x, y+rhs.y);
}
Vector2 Vector2::operator-(const Vector2 rhs) const {
    return Vector2(x-rhs.x, y-rhs.y);
}
Vector2 Vector2::operator*(const float rhs) const {
    return Vector2(x*rhs, y*rhs);
}
float Vector2::operator*(const Vector2 rhs) const {
    return x * rhs.x + y * rhs.y;
}
Vector2 Vector2::operator/(const float rhs) const {
    return Vector2(x/rhs, y/rhs);
}
