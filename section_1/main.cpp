
// file: main.cpp
// author: Tanzila Nasrin Tazin
// Created at: 14-10-2022

#include <iostream>
#include <algorithm>
#include "helpers.h"

int main() {
    //Given array sizes to test the sorting algorithm
    //This 30 array will show the execution times
    //3 at the end denotes the type of the array for example random, sorted and inverse
    int sizes[3] = {100000, 1000000, 10000000};
    int len;
    int* pData;

    for (int i = 0; i < 3; i++) {
        len = sizes[i]; //taking the array size

        for (int j = 1; j <= 10; j++) {
            pData = new int[len]; //insert the data into pData

            for (int k = 0; k < len; k++) {
                pData[k] = rand();  //generate a random array
            }

            // sort a random array
            sort_random(pData, len, j);

            // sort a sorted array
            sort_sorted(pData, len);

            // reverse the array
            std::reverse(pData, pData + len);

            // sort a reversed array
            sort_reversed(pData, len);
        }

        std::cout << "\n";
    }

    return 0;
}
