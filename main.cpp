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
    virtual void getDraw(){
        cout << 'Test lol' << endl;
    }
};
class draw1: public Base{
public:
    
        void getDraw(){
        cout << "Drawing 1:" << endl << " /\\ " << endl << "//\\\\" << endl;
      
        }
};
class draw2: public Base{
public:
    void getDraw(){
        cout << "Drawing 2:" << endl << " /\\ " << endl << "/**\\" << endl;
      
        }
        
};
class draw3: public Base{
public:
   void getDraw(){
        cout << "Drawing 3:" << endl << " /\\ " << endl << "/++\\" << endl;
      
        }
    
};
/*
 * 
 */
int main(int argc, char** argv) {
    draw1 *Draw1;
    draw2 *Draw2;
    draw3 *Draw3;

    Draw1 = new draw1;
    Draw2 = new draw2;
    Draw3 = new draw3;
    
    Base *array[3];
    
    array[0]= new draw1();
    array[1]= new draw2();
    array[2]= new draw3();
    
    for(int i = 0; i < sizeof(array); i++)
    {
        array[i]->getDraw();
    }
    return 0;
}

