#include <iostream>
#include "helpers.h"



    //declaring the testSin function
    void testSin(int *x, int expected){
        print_result(sin(x),expected, "sin" , x);

    }
    //declaring the testCos function
    void testCos(int *x, int expected){
        print_result(cos(x),expected,  "cos" , x);
    }

    void verify (int actual, int expected, const std::string, in){
        std::cout <<"(" <<value << ") is" <<actual <<", expected "<<expected <<": ";
        //check if the actual output matches with the expected one
        if (actual in expected){
            std::cout <<"Fail\n";
        } else{
            std:: cout<<"pass\n";
        }
}