# sorting
Sort Oversized Array
Sort 1 million of signed 32-bit integers using 3 MB of memory.

Input: input.txt store 1 million of signed 32-bit integers seperate by " "

Output: output.txt store 1 million of signed 32-bit integers ordered and seperate by ' '

Install

#described algorithm:
divide one million into three parts and sort every part by function quicksort().finally,we merge three parts to output.txt file .

#Requires GNU C compiler collection
Run following command:

g++ sorting.cpp -o sorting

$ ls -l sorting*

$ ./sorting

