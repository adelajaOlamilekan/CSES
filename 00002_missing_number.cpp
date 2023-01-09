/*
You are given all numbers between 1,2,…,n except one. 
Your task is to find the missing number.

Approach1:  Sort the number
            While traversing the list:
            the missing number is found when next number is not 1 from previous number

Approach2:  Compute the sum of first N integers(line1)
            Sum all the given integers (line2)
            The missing integer is the difference between line1 and line2 

Time Complexity:    O(n)
Space Complexity:   O(n)
*/

#include<iostream>
#include<vector>

//Approach1
// int main(){
//     int n = 0, currentNo = 0;
//     std::cin>>n;

//     //Setting the default value(zero) for each number position
//     std::vector<int> nums(n, 0);

//     //Setting the values of the vector
//     while(std::cin>>currentNo)
//         nums[currentNo-1] = currentNo;

//     //Checking for the missing value
//     int IndexOfpotentialMissingValue = 0;
//     while(nums[IndexOfpotentialMissingValue] != 0 && IndexOfpotentialMissingValue < n)
//         ++IndexOfpotentialMissingValue;
    
//     //Printing the missing value;
//     int actualMissingValue = IndexOfpotentialMissingValue+1;
//     std::cout << actualMissingValue;

//     return 0;
// }

//Approach2

int main(){
    long long n = 0, currentNo= 0, expectedSumOfN = 0, actualSumofN = 0;

    std::cin >> n;
    expectedSumOfN = n*(n+1)/2; 
    while(std::cin>>currentNo){
        actualSumofN+=currentNo;
    }

    std::cout << expectedSumOfN-actualSumofN;

    return 0;
}