//
//  10_study.cpp
//  practice_cpp
//
//  Created by 박준형 on 2020/08/19.
//  Copyright © 2020 박준형. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

// const double PI = 3.14;
// 개발자가 임의로 수를 바꾸지 않게 상수형으로 선언을 해주면 값을 바꿀 수 없다.
// const는 매개변수를 상수화한다. (모든 함수에 대해 사용 가능)
// 또한, 매서드의 상수화도 가능하다. (멤버 매서드)

// 은행 계좌 보안 클래스

class Account{
public:
    Account(): money(0) { }
    Account(int money): money(money) {
        cout << "현재 잔액 : " << money << endl;
    }
    
    void Deposit(const int d) { // 매개 변수는 바뀌어서는 안되기 때문에 상수화 필요
        // d = money; d를 상수화해주었기 때문에 오류 발생
        money += d;
        cout << d << "원을 예금했다!" << endl;
    }
    void Draw(const int d) {
        if(money >= d) {
            money -= d;
            cout << d << "원을 인출했다!" << endl;
        }
    }
    int ViewMoney() const { // 매서드를 상수화 시키고자 할때는 함수 앞에다 붙이지 말고 저렇게 뒤에다 붙임
        //money++; // 이런 실수를 방지하고자 상수화 시킴 (멤버 매서드를 상수화)
        return money;
    }
private:
    int money;
};

int main() {
    Account doodle(100);
    doodle.Deposit(100);
    doodle.Draw(20);
    cout << doodle.ViewMoney() << endl;
}
