#include <iostream>
#include "../src/stack/stack.h"

int main(void) {
    Stack s = Stack();
    SValue val;
    std::cout << "Putting items on the stack: 1,2,3" << std::endl;
	try{
    s.push(1);
    s.push(2);
    s.push(3);
	}catch(const char* msg) {
      std::cout << msg << std::endl;
   }

	try{
    std::cout << "Popping items off the stack and printing:" << std::endl;
    val = s.pop();
    print(val);
    std::cout << std::endl;
    val = s.pop();
    print(val);
    std::cout << std::endl;
    val = s.pop();
    print(val);
    std::cout << std::endl;
    val = s.pop();
    print(val);
	}catch(const char* msg) {
      std::cout << msg << std::endl;
   }
    std::cout << std::endl;
	try{
    std::cout << "Putting items on the stack: 4,5,6" << std::endl;
    s.push(4);
    s.push(5);
    s.push(6);
	}catch(const char* msg) {
      std::cout << msg << std::endl;
   }
    std::cout << "Printing the stack:" << std::endl;
    s.print();
    return 0;
}
