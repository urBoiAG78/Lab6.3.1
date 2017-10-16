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

using namespace std;
class Base{
public: 
    Base(){};
    void draw(string drawing){
        cout << drawing << endl;
    }
};
class draw1: public Base{
public:
    Draw(){
        Base::draw("Drawing 1:");
        Base::draw(" /\\ ");
        Base::draw(" //\\\\ ");
    }
    
};
class draw2 :public Base{
public:
    Draw(){
        Base::draw("Drawing 2:");
        Base::draw(" /\\ ");
        Base::draw(" /**\\ ");
    }
};
class draw3:public Base{
public:
    Draw(){
        Base::draw("Drawing 2:");
        Base::draw(" /\\ ");
        Base::draw(" /++\\ ");
    }
};
/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

