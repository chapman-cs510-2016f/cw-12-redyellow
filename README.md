# CS510 CW 12 
**Author(s):** _Nengyin Zhu, Kaiqin Huang_

[![Build Status](https://travis-ci.org/chapman-cs510-2016f/cw-12-redyellow.svg?branch=master)](https://travis-ci.org/chapman-cs510-2016f/cw-12-redyellow)

**Due date:** 2016/11/29

## Specification

**Note: Remember this is a C++ project.**

Complete the following exercises, saving your solutions in the indicated files. 

1. Recall the following references, which will still be useful throughout the rest of the course.
    * [C++ Tutorial](http://www.cplusplus.com/doc/tutorial/)
    * [C++ Essentials](https://tfetimes.com/wp-content/uploads/2015/09/CppEssentials.pdf)
    * [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
1. Examine the source code in ```src/streams``` carefully. 
    1. In a Jupyter notebook ```Streams.ipynb```, explain the key differences that you see in the file between C++ and C.
    1. Describe the concept of a namespace, and what :: means.
    1. Describe how streams do things differently. In particular, explain the differences in reading from command line arguments, reading and writing to a file, printing to standard output, and printing to standard error.
    1. Explain how a C++ string differs from a C string.
    1. Compile and run the code, and make sure you understand the output.
1. Examine the source code in ```src/structs``` carefully.
    1. In a Jupyter notebook ```Structs.ipynb```, explain how this code differs from the equivalent C implementation that you examined in a previous class. Be specific and detailed.
    1. Explain what a #define guard does, and why it could be useful
    1. Explain what type overloading is, and why it could be useful
    1. Explain the difference between "pass by reference" in C and "pass by reference" in C++.
    1. Explain what operator type overloading is, and why it could be useful
    1. Finish implementing the needed functions, and make sure your code compiles and runs. Explain the output carefully.
1. Examine the source code in ```src/stack``` carefully. 
    1. In a Jupyter notebook ```Stack.ipynb```, describe how the ```Stack``` type is defined and how it works in detail. Explain in particular the differences between this implementation and the C implementation that you have already coded. 
    1. Explain the difference between a class and a struct
    1. Explain what private and public do
    1. Explain what size_t is used for
    1. Explain why this code avoids the use of C pointers
    1. Explain what new and delete do in C++, and how they relate to what you have done in C
    1. Explain what a memory leak is, and what you should do to avoid it
    1. Explain what a unique_ptr is and how it relates to both new and C pointers
    1. Explain what a list initializer does
    1. Explain what the "Rule of Zero" is, and how it relates to the "Rule of Three"
    1. Finish implementing the missing functions in a sensible way. Be sure to fix the bug so that the depth field is used properly.
    1. Make sure that ```test_struct``` in the ```test/``` folder compiles and runs correctly after you are finished implementing ```Struct```.
    1. Use [valgrind](http://valgrind.org/docs/manual/quick-start.html) to verify that you have no memory leaks in your working program. (You will have to edit the primary Makefile to change the CXXFLAGS to enable -g for debugging.)
    1. Fix the code so that it throws an exception properly if one tries to pop an empty stack.
    1. Fix the code so that depth cannot increase beyond the [numerical limit for size_t](http://en.cppreference.com/w/cpp/types/numeric_limits/max). Create a new method ```bool full()``` that checks if your Stack is full. Throw an exception properly if you try to push an item onto a full stack.


## Assessment

This part is difficult, especially for the concept of unique_ptr, and rule of zero. rule of three.

This first C++ classwork teaches me so many new definitions.  I have found that it is a good way to pick up C++ by comparing it with C.  Some extremely helpful concepts I have learned from this classwork include:

1. Namespace and the use of "::";
2. Overloading (function overloading and operator overloading);
3. Class, and how it differs from structure in C (private and public);
4. What #define guard is and how it works in the header file;
5. The use of smart pointers (unique_ptr and shared_ptr);
6. Memory leak (which is the reason why people prefer to use smart pointers);
7. "Rule of Zero" and "Rule of Three";
8. Valgrind (to verify that there has no memory leak).


## Honor Pledge

I pledge that all the work in this repository is my own with only the following exceptions:

* Content of starter files supplied by the instructor;
* Code borrowed from another source, documented with correct attribution in the code and summarized here.

Signed,

**Nengyin Zhu, Kaiqin Huang**
