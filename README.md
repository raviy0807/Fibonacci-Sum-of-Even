Fibonacci-Sum-of-Even

## Goal:
The task is to write a cpp program to calculate the sum of even fibonacci numbers using class.

## Setup:
1. Development Environment: Ubuntu 18.04
2. IDE : Clion 
3. Build Tool: Cmake 3.14
4. 3rd Party Library: Boost

## Logic:
1. Every 3rd number in the fibonacci series is even number. Based on the formula expansion. [Ref1](https://www.geeksforgeeks.org/nth-even-fibonacci-number/), [Ref2](https://stackoverflow.com/questions/23168502/sum-of-even-fibonacci-numbers-below-4-million-python).
2. Therefore, considering the 0th number as 0 and the next even number as 2, the program calculate the even number.
3. The program uses **cpp_int** data type of boost library to increase the limit of expansion. [Ref] (https://www.boost.org/doc/libs/1_61_0/libs/multiprecision/doc/html/boost_multiprecision/tut/ints.html)
4. CMake downloads the boost library locally if it is not present in system environment.
5. The program is not written for the Negative numbers.

## Area of Improvement:
1. Test the results with different data types like **gmp_int**, **tom_int**, etc.
2. Use Boost Test for the Unit Testing of the Module.

Feel free to suggest improvement.

