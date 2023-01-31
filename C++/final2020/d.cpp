#include <iostream>
#include <string>
#include <sstream>

bool isValidIP(std::string str) {
  // Use stringstream to split the string by '.'
  std::stringstream ss(str);
  std::string token;
  int count = 0;

  // Split the string and convert each token to an integer
  while (std::getline(ss, token, '.')) {
    // Check if the token is a valid integer in the range [0, 255]
    if (token.empty() || token.size() > 3 || std::stoi(token) < 0 || std::stoi(token) > 255) {
      return false;
    }
    count++;
  }

  // Check if there are exactly 4 tokens
  return (count == 4);
}

int main() {
  std::string s; std::getline(std::cin, s);
  std::cout<<isValidIP(s);


  return 0;
}
