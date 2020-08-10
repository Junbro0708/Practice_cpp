//
//  03_1_isPalindrome.cpp
//  practice_cpp
//
//  Created by 박준형 on 2020/08/10.
//  Copyright © 2020 박준형. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <deque>

using namespace std;

class Solution{
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }
        
        deque <int> dq;
        
        while(x != 0) {
            dq.push_back(x % 10);
            x /= 10;
        }
        while(!dq.empty()) {
            if(dq.front() != dq.back()) {
                return false;
            }
            dq.pop_front();
            if(dq.size() <= 1) {
                return true;
            }
            dq.pop_back();
            if(dq.size() <= 1) {
                return true;
            }
        }
        return true;
    }
};

int main() {
    Solution a;
    a.isPalindrome(1221);
    return 0;
}
