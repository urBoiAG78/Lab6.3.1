/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agonzalez
 *
 * Created on October 11, 20817, 12:49 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
class Base{
public: 
    Base(){};
    string draw(string drawing){
        cout << drawing << endl;
    }
};
class draw1: public Base{
public:
    
        void getDraw(void){
        Base::draw("Drawing 1:");
        Base::draw(" /\\ ");
        Base::draw("//\\\\");
        }
};
class draw2: public Base{
public:
    
        void getDraw(void){
        Base::draw("Drawing 1:");
        Base::draw(" /\\ ");
        Base::draw("//\\\\");
        }
};
class draw3: public Base{
public:
   
    void getDraw(void){
    Base::draw("Drawing 1:");
    Base::draw(" /\\ ");
    Base::draw("//\\\\");
        }
};
/*
 * 
 */
int main(int argc, char** argv) {
    draw1 *Draw1;
    draw2 *Draw2;
    draw3 *Draw3;
    
    Draw1 = new draw1();
    Draw2 = new draw2();
    Draw3 = new draw3();
    
    
    return 0;
}

