# sorting
Sort Oversized Array
Sort 1 million of signed 32-bit integers using 3 MB of memory.

Input: input.txt store 1 million of signed 32-bit integers seperate by " "

Output: output.txt store 1 million of signed 32-bit integers ordered and seperate by ' '

Install

#described algorithm:
divide one million into three parts and sort every part by function quicksort().finally,we merge three parts to output.txt file .

#list program:
+sorting.cpp: Sort 1 million of signed 32-bit integers using 3 MB of memory
+test.cpp:check sorting program execute
+randonlist.cpp:make a standard input file,it include one million number from -5000 to 5000
+input.txt:is standard input example

#instruction:
+sorting.cpp:After you compiler and run,enter standard input from keyboard.display appear result
+test.cpp:After you compiler and run,enter standard output from sorting.cpp,if program run smoothly,display appear the words: program is perfect,else appear the words:faulty program.
+randomlist.cpp:After you compiler and run,enter name of random standard input you want create,program make it .

#Requires GNU C compiler collection
Run following command:

g++ sorting.cpp -o sorting

$ ls -l sorting*

$ ./sorting

