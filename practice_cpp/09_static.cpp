//
//  09_static.cpp
//  practice_cpp
//
//  Created by 박준형 on 2020/08/17.
//  Copyright © 2020 박준형. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

// static : 정적 <-> 동적 (클래스에 포함이되는 멤버들은 정적이거나 동적일 수 있고 구조체는 동적)
// 동적은 객체에 포함이 되는 것 (클래스라는 틀로 찍어낸 객체)
// 정적은 객체에 해당되는 것이 아닌 틀에 해당되는 것
// 클래스를 예로 들면 정적 멤버는 하나가 되지만(틀), 동적 멤버는 여러개가 될 수 있다.

// 색깔을 저장하는 클래스 RGB
// static은 전역에서 쓰고싶은 함수가 있는데 이 함수가 클래스와 밀접한 관련이 있고 클래스 내의 멤버 변수에 접근이 가능하게 하고싶을 때, 사용한다.


class Color {
public:
    Color(): r(0), g(0), b(0), id(idCounter++) {
        //id = idCounter;
        //idCounter++;
        //id = idCounter++; // 위와 동일
    }
    Color(float r, float g, float b): r(r), g(g), b(b), id(idCounter++) { }
    
    float GetR() {return r;}
    float GetG() {return g;}
    float GetB() {return r;}
    int GetId() {return id;}
    
    static Color MixColors(Color a, Color b) {
        //Color res((a.GetR()+b.GetR()) / 2, (a.GetG()+b.GetG()) / 2, (a.GetB()+b.GetB()) / 2);
        //return res; 이렇게 쓸 수 있지만, 그냥 밑에처럼 써도 무방하다.
        //return Color((a.GetR()+b.GetR()) / 2, (a.GetG()+b.GetG()) / 2, (a.GetB()+b.GetB()) / 2);
        return Color((a.r+b.r) / 2, (a.g+b.g) / 2, (a.b+b.b) / 2);
    } // 함수를 안에 넣었을 때 가장 편리한 점은, private에 접근이 가능하다는 것이다. 그래서 get함수를 써줄 필요가 없다.
    
    static int idCounter; // 정적으로 선언된 변수는 초기화를 할 수 없다.
    // 정적으로 선언된 멤버 변수는 바깥에서 사용할 때 네임스페이스 활용
    
private:
    float r;
    float g;
    float b;
    
    int id;
};

// 믹스컬러 함수를 밑에다 써줘도 되지만, Color클래스와 밀접한 관련이 있기 때문에 Color클래스 안에 넣어준다. 이럴 경우, 메인함수의 믹스컬러에 빨간 줄이 뜨는데, 그 이유는 소속이 불분명해졌기 때문이다. 이때 static을 써서 정적으로 바꿔준뒤 소속을 명시해주면 된다.

int Color::idCounter = 1;

int main() {
    Color Red(1,0,0);
    Color Blue(0,0,1);
    Color Purple = Color::MixColors(Blue, Red);
    
    cout << "r = " << Purple.GetR() << endl;
    cout << "g = " << Purple.GetG() << endl;
    cout << "b = " << Purple.GetB() << endl;
    
    cout << "Red.Id = " << Red.GetId() << endl;
    cout << "Blue.Id = " << Blue.GetId() << endl;
    cout << "Purple.Id = " << Purple.GetId() << endl;
    
}
