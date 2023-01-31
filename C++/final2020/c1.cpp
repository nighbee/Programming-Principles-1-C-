#include <iostream>
#include <map>
#include <string>

int main() {
  // Read the input string
  std::string s;
  std::cin >> s;

  // Initialize a map to count the occurrences of each letter
  std::map<char, int> letterCount;
  for (char c = 'A'; c <= 'D'; c++) {
    letterCount[c] = 0;
  }

  // Count the occurrences of each letter
  for (char c : s) {
    letterCount[c]++;
  }

  // Print the results
  for (char c = 'A'; c <= 'D'; c++) {
    if (letterCount[c] > 0) {
      std::cout  << c << " " << letterCount[c]  << std::endl;
    }
  }

  return 0;
}
