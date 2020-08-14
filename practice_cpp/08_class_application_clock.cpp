//
//  08_class_application_clock.cpp
//  practice_cpp
//
//  Created by 박준형 on 2020/08/15.
//  Copyright © 2020 박준형. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

// 시 분 초 를 저장하는 클래스

class Time {
public:
    // 초만 저장하기 위해서는 매개변수를 한개만 쓰자 -> 0시간 0분 5초라고는 안하니까 마찬가지로 분을 저장할 때는 몇분 몇초라고 쓰기 때문에 두개, 시간을 저장한다면 세개
    // Time(5) = 5초
    // Time(5, 5) = 5분 5초
    // Time(5, 5, 5) = 5시간 5분 5초
    
    // 생성자 위임이란 자기 클래스 내에 다른 생성자를 호출하는 기법
    
    Time(): hours(0), minutes(0), seconds(0) {}
    Time(int s_): Time() {
        seconds = s_;
    }
    Time(int m_, int s_): Time(s_) {
        minutes = m_;
    }
    Time(int h_, int m_, int s_): Time(m_, s_) {
        hours = h_;
    } // 위임된 생성자를 먼저 확인하고 값을 대입
    
    void PrintTime() {
        cout << "현재 시각은 " << hours << "시간 " << minutes << "분 " << seconds << "초입니다." << endl;
    }
private:
    int hours;
    int minutes;
    int seconds;
};

int main() {
    Time t1;
    Time t2(5);
    Time t3(5, 6);
    Time t4(10, 25, 4);
    
    t1.PrintTime();
    t2.PrintTime();
    t3.PrintTime();
    t4.PrintTime();
}
