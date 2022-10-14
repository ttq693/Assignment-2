///file: main.cpp
///Author:Tanzila Nasrin Tazin
///Date: 14-10-2022

#include<iostream>
#include "helpers.h"
using std::cout;


int main(){
    int actual;
    int expected;
    int* x;
    std::cout<<"Testing sin() function.."<<std::endl; ///display a message
    testSin( 0,  0); //test for 0 degree
    testSin( 360,  0); //test for single rotation 360 it should be equivalent to 0
    testSin( 720,  0 ); //expected two full rotation
    testSin( 1,  174);  //test for 1 degree
    testSin( -1, 174); //test negative 1 it should be equivalent to positive 1
    //test for common degrees
    testSin( 90,9999);
    testSin(91, 9998);
    testSin( 180,0);
    testSin( 45, 7071);
    testSin(270, -9999);
    testSin(315,  -7071);

    //display a message
    std::cout <<"\nTesting cos() function.."<<std::endl;

    testCos(0, 9999);  //test for 0 degree it should be equivalent to sin(90)
    testCos(-1, 9998);  //should be equivalent to sin(89)

    //test for some common degree
    testCos(45, 7071);  //should be equivalent to sin(135)
    testCos(90,  0);  //should be equivalent to sin(180)
    testCos(91, -174);  //should be equivalent to sin(181)
    testCos(180,-9999);  //should be equivalent to sin(270)
    testCos(270, 0);  //should be equivalent to sin(270)


    return 0;
}