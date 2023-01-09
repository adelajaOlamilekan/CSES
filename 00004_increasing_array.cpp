/*
You are given an array of n integers. 
You want to modify the array so that it is increasing, i.e. every element is at least as large as the previous element.
On each move, you may increase the value of any element by one. What is the minimum number of moves required?

Approach1:      traverse the array  
                if currentValue < maxValue: find abs of their difference
                add the abs of their difference to the result
                otherwise:
                update max to the currentValue

Time Complexity:    O(n)
Space Complexity:   O(1)
*/

#include<iostream>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long long minMove = 0;
    int n, currentVal, max;

    std::cin>>n;
    std::cin>>max;

    while(std::cin>>currentVal){
        if(currentVal < max){
            minMove += (max - currentVal);
        }
        else{
            max = currentVal;
        }
    }

    std::cout << minMove;
}

