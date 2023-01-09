/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. 
Your task is to find the longest repetition in the sequence. 
This is a maximum-length substring containing only one type of character.

Approach1:      Traverse the string
                if character is repeated or the first character:
                increment the counter
                update the max-length of substring
                update the prev. char to current char.                 
                when next char. doesn't match prev.char:
                update max-length of subtring 
                reset counter to 1 

Time Complexity:    O(n)
Space Complexity:   O(1)
*/

#include<iostream>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    char currentChar;
    char prevChar;
    int counter = 1;
    int max = 0;

    std::cin>>prevChar;
    max = counter > max ? counter : max;
    while(std::cin >> currentChar){
        if(currentChar == prevChar ){
            ++counter;
            //prevChar = currentChar;
        }
        else{
            prevChar = currentChar;
            counter = 1;
        }
        max = counter > max ? counter : max;
    }

    std::cout << max;
}