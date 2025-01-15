#include <iostream>
#include <vector>

int main() {
  //Avoid std::vector<bool>, use std::vector<char> or std::vector<uint8_t> instead
  std::vector<char> vec; //Use this instead
  vec.push_back(1); //true
  vec.push_back(0); //false
  bool b = vec[0];
  bool c = vec[1];
  std::cout << "b: " << b << std::endl; //output: true
  std::cout << "c: " << c << std::endl; //output: false
  return 0;
}
