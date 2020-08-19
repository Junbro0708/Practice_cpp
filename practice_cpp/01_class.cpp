//
//  main.cpp
//  practice_cpp
//
//  Created by 박준형 on 2020/08/03.
//  Copyright © 2020 박준형. All rights reserved.
//

#include <iostream>

using namespace std;

class Rectangle {
private:
    double width = 1.2;
    double height = 1.3;
    
public:
    Rectangle() {}
    Rectangle(double x):width(x){}
    Rectangle(double x, double y):width(x), height(y) {}
    
    void Print();
};

void Rectangle::Print() {
    std::cout << "Width: " << width << ", Height: " << height << std::endl;
}

int main(int argc, const char * argv[]) {
    Rectangle a {1.5, 1.6};
    a.Print();
    Rectangle b;
    b.Print();
}
