/*
Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:
3→10→5→16→8→4→2→1

Your task is to simulate the execution of the algorithm for a given value of n.

Approach:   Check if n is odd or even, 
            perform the appropriate operation, 
            update n,
            repeat until n is 1
*/

#include<iostream>

int main(){
    long long n = 0;
    std::cin >> n;

    while(n !=  1){
        std::cout << n << " ";
        //updating n based on its parity
        n = n%2==0 ? n/2 : n*3+1;
    }
    std::cout << n << " ";

    return 0;
}


