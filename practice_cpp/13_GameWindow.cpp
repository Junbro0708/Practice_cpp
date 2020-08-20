//
//  13_GameWindow.cpp
//  practice_cpp
//
//  Created by 박준형 on 2020/08/20.
//  Copyright © 2020 박준형. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

class GameWindow{
public:
    GameWindow();
    GameWindow(int, int);
    
    int GetWidth() const;
    int GetHeight() const;
    
     GameWindow ResizeWindow(int w, int h) {
         if (w >= 800 && h >= 600) { return GameWindow(width = w, height = h); }
         else if (w <= 800 && h <= 600) { return GameWindow(800, 600); }
         else if (w <= 800) {  return GameWindow(800, height = h); }
         else {  return GameWindow(width = w, 600); }
    }
    
private:
    int width;
    int height;
};
GameWindow::GameWindow() : width(800), height(600) {}
GameWindow::GameWindow(int w, int h) : width(w), height(h) {}

int GameWindow::GetWidth() const { return width;}
int GameWindow::GetHeight() const { return height;}


int main() {
    GameWindow mainWindow;
    mainWindow.ResizeWindow(766, 668);
    
    cout << mainWindow.GetWidth() << ", " << mainWindow.GetHeight() <<  endl;
}
