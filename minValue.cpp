// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by: Reid MacLean
// Created on: May 2025
// This program find the minimum value in a list of
// random numbers between 1 and 100

#include <array>
#include <cstdlib>
#include <ctime>
#include <iostream>

// Constants
const int MAX_ARRAY_SIZE = 10;
const int MIN_NUM = 0;
const int MAX_NUM = 100;

int findMinValue(const std::array<int, MAX_ARRAY_SIZE>& nums) {
    int minVal = nums[0];
    for (int num : nums) {
        if (num < minVal) {
            minVal = num;
        }
    }
    return minVal;
}

int main() {
    std::array<int, MAX_ARRAY_SIZE> arrayOfInt;

    // Seed random number generator
    std::srand(std::time(NULL));

    // Generate and print random numbers
    std::cout << "Generated numbers: ";
    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
        arrayOfInt[i] = (std::rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;
        std::cout << arrayOfInt[i] << " ";
    }
    std::cout << std::endl;

    // Find and display minimum value
    int minValue = findMinValue(arrayOfInt);
    std::cout << "Minimum value: " << minValue << std::endl;

    return 0;
}
