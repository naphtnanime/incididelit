#include <array>
#include <iostream>

int main() {
  std::array<int, 3> arr{1, 2, 3};

  // Accessing elements using std::get
  int firstElement = std::get<0>(arr);
  int secondElement = std::get<1>(arr);
  int thirdElement = std::get<2>(arr);

  std::cout << "First element: " << firstElement << std::endl;
  std::cout << "Second element: " << secondElement << std::endl;
  std::cout << "Third element: " << thirdElement << std::endl;

  return 0;
}
