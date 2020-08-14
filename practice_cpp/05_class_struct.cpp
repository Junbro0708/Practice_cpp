//
//  05_class_prin.cpp
//  practice_cpp
//
//  Created by 박준형 on 2020/08/14.
//  Copyright © 2020 박준형. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

// C언어의 struct(구조체)와 C++의 클래스의 차이점은 구조체는 디폴트가 public이고 class는 디폴트가 private
// 클래스는 자료 저장 + 자료 처리 = 변수 + 함수 ( 가장 기본이 되는 것 )
// 클래스(타입) = 특정한 용도를 수행하기 위한 변수와 함수를 모아 둔 틀 (자료형)
// 오브젝트 (객체) = 클래스라는 틀을 이용하여 찍어낸 개체 (변수, 메모리 상의 공간)

struct TV { // struct를 class로 바꿔도 바로 사용가능 가장 큰 차이점은 접근 제어지시자
private:
    bool powerOn;
    int Channel;
    int volume; // private로 쉽게 접근을 못하게 하는게 캡슐화
     
public:
    void On() {
        powerOn = true;
        cout << "TV를 켰습니다." << endl;
    }
    void Off() {
        powerOn = false;
        cout << "TV를 껐습니다." << endl;
    }
    void set_Chnnel(int cnl) {
        if(cnl >= 1 && cnl <= 999) {
            Channel = cnl;
            cout << "채널을" << Channel << "으로 바꿨습니다." << endl;
        }
    }
    void set_Volume(int vol) {
        if(vol >= 0 && vol <= 100) {
            volume = vol;
            cout << "볼륨을" << volume << "으로 바꿨습니다." << endl;
        }
    }
};
// 접근 제어 지시자 : private (객체 내에서는 변수 초기화가 가능하지만, 메인 함수에서는 x), public (객체 내에서나 메인 함수에서나 설정 가능), protected

int main() {
    TV LG;
    LG.On();
    LG.set_Chnnel(120);
    LG.set_Volume(-73);
    //LG.volume = 400; 안전한 코딩을 하기위해 volume 변수를 함부로 설정하지 못하게 하고 싶음 -> 접근 제어지시자
}
