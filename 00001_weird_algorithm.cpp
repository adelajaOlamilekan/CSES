/*
Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:
3→10→5→16→8→4→2→1

Your task is to simulate the execution of the algorithm for a given value of n.

Approach1(Arithmetic Computation):      Check if n is odd or even, 
                                        perform the appropriate operation, 
                                        update n,
                                        repeat until n is 1

Approach2(Bit Manipulation):            Approach1 but the mathematical operation are done with bit manipulation

Time complexity:    O(n)
Space complexity:   O(1)
*/

#include<iostream>

//Approach1
// int main(){
//     long long n = 0;
//     std::cin >> n;

//     while(n !=  1){
//         std::cout << n << " ";
//         //updating n based on its parity
//         n = n%2==0 ? n/2 : n*3+1;
//     }
//     std::cout << n << " ";

//     return 0;
// }

//Approach 2
int main()
{
	long long n;
	std::cin >> n;
	cout << n << " ";

	while (n > 1)
	{
		if (n & 1)      //checks for odd parity
			n = (3 * n) + 1;
		else
			n >>= 1;    //Divide n by 2
		cout << n << " ";
	}
	return 0;
}


