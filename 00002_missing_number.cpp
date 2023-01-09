/*
You are given all numbers between 1,2,…,n except one. 
Your task is to find the missing number.

Approach1:  Sort the number
            While traversing the list:
            the missing number is found when next number is not 1 from previous number

Time Complexity:    O(n)
Space Complexity:   O(n)
*/

#include<iostream>
#include<vector>

int main(){
    int n = 0, currentNo = 0;
    std::cin>>n;

    //Setting the default value(zero) for each number position
    std::vector<int> nums(n, 0);

    //Setting the values of the vector
    while(std::cin>>currentNo)
        nums[currentNo-1] = currentNo;

    //Checking for the missing value
    int IndexOfpotentialMissingValue = 0;
    while(nums[IndexOfpotentialMissingValue] != 0 && IndexOfpotentialMissingValue < n)
        ++IndexOfpotentialMissingValue;
    
    //Printing the missing value;
    int actualMissingValue = IndexOfpotentialMissingValue+1;
    std::cout << actualMissingValue;

    return 0;
}