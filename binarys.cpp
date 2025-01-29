#include <iostream>
#include <algorithm>

int main()
{
  int x = 3;
  int n = 3;
  int array[n] = { 2, 4, 5};
  for (int i = 0; i < n; i++) {
    if (array[i] == x) 
      std::cout << 11;
    else
      return 0;
  }
  //std::cout << array[i] << ' ';
}
