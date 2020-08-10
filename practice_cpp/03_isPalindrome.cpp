//
//  03_quiz.cpp
//  practice_cpp
//
//  Created by 박준형 on 2020/08/10.
//  Copyright © 2020 박준형. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

class Solution{
public:
    bool isPalindrome(int x) {
        int num = 0;
        int x_num = x;
        while(x != 0) {
            if(num == 0) {
                num = x % 10;
            }else {
                num *= 10;
                num += x % 10;
            }
            x = x / 10;
        }
        cout << num << endl;
        
        if(x < 0) {
            return false;
        }else if(num == x_num) {
            return true;
        }else {
            return false;
        }
    }
};

int main() {
    Solution a;
    a.isPalindrome(-121);
    
}
