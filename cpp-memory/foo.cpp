#include <iostream>

void foo(){
  int x = 42;
  std::cout << " x in foo(): " << x << std::endl;
  std::cout << "&x in foo(): " << &x << std::endl;
}

int main() {
  int num = 7; // stored on the stack
  std::cout << " num in main(): " << num << std::endl;
  std::cout << "&num in main(): " << &num << std::endl;

  foo(); // the next stack address is growing down towards 0
  return 0;
}