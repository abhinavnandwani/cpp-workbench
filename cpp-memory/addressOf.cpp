#include <iostream>

int main() {
  int num = 7; // stored on the stack
  std::cout << "Value: " << num << std::endl;
  std::cout << "Address: " << &num << std::endl;
  // Note : Stack memory always starts from high addresses and grows down
  // Stack memory is associated with the current function.
  // The memory's lifecycle is tied to the function,
  // hence when the function returns or ends, the stack memory of that function
  // is released

  return 0;
}