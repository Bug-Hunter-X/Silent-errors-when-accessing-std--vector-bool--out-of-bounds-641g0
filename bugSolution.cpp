#include <vector>
#include <iostream>

int main() {
  std::vector<bool> vec(10);
  int index = 15; 
  if (index >= 0 && index < vec.size()) {  //Check boundaries
    bool value = vec[index];
    std::cout << "Value at index " << index << ": " << value << std::endl; 
  } else {
    std::cerr << "Index out of bounds!\n";
  }
  return 0;
} 