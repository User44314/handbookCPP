#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  std::vector<int> v = {4,2,5,3,5,8,3};
  std::sort(v.begin(),v.end());
  for (int i = 0; i < v.size(); i++)
    {
      std::cout << v[i] << ' ';
    }
  std::cout << std::endl;
  std::sort(v.rbegin(),v.rend()); // revers sorting
  for (int i = 0; i < v.size(); i++)
    {
      std::cout << v[i] << ' ';
    }
  std::cout << std::endl;
  // Обычный массив можно отсортировать следующим образом:
  int n = 7; // array size
  int a[n] = {4,2,5,3,5,8,3};
  std::sort(a,a+n); //sort(<имя массива>, <имя массива> + <размер массива>, компаратор);
  for (int i = 0; i < n; i++)
    {
      std::cout << a[i] << ' ';
    }
  std::cout << std::endl;
  std::string s = "monkey"; //sort string
  std::sort(s.begin(), s.end());
  for (int i = 0; i < s.size(); i++)
    {
      std::cout << s[i] << ' ';
    }
}
