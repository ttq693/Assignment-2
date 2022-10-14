
// file:helpers.cpp
// author: Tanzila Nasrin Tazin
// Created at: 14-10-2022
#include <iostream>
#include "helpers.h"
#include <algorithm>
#include <chrono>


//function for sort a random array
void sort_random(int *pData, int len, int arrNo) {
    //to calculate the time in microseconds
    auto start = std::chrono::high_resolution_clock::now();
    std::sort(pData, pData + len); //sort the random function in ascending order
    auto end = std::chrono::high_resolution_clock::now();

    auto et = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Size: " << len << ", Arr " << arrNo << ", Random: " << et.count() << ", ";
}

void sort_sorted(int *pData, int len) {
    //to calculate the time in microseconds
    auto start = std::chrono::high_resolution_clock::now();
    std::sort(pData, pData + len); //sort the sorted function in ascending order
    auto end = std::chrono::high_resolution_clock::now();

    auto et = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Asc: " << et.count() << ", ";
}

void sort_reversed(int *pData, int len) {
    //to calculate the time in microseconds
    auto start = std::chrono::high_resolution_clock::now();
    std::sort(pData, pData + len); //sort the sorted function in inversed order
    auto end = std::chrono::high_resolution_clock::now();

    auto et = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Inverse: " << et.count() << std::endl;
}
