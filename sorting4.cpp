//Пары (pair) сортируются в первую очередь по их первым элементам (first).
//Однако, если первые элементы двух пар равны,
//они сортируются по их вторым элементам (second):
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <iomanip>
#include <tuple>

using namespace std;

int main(){
  std::vector<std::pair<int,int>> v;
  v.push_back({1,5});
  v.push_back({2,3});
  v.push_back({1,2});
  std::sort(v.begin(), v.end());
  for(auto i: v)
    std::cout << i.first << " " << i.second << std:: endl;
  //Як створити вектор кортежів у C++ (tuple)
  std::vector<std::tuple<int,int,int>> v1;
  v1.push_back({2,1,4});
  v1.push_back({1,5,3});
  v1.push_back({2,1,3});
  std::sort(v1.begin(), v1.end());
  int i = 1;
  for(const auto& tuple : v1){
    std::cout << i << ')'<< get<0>(tuple) << " " << get<1>(tuple) << " " << get<2>(tuple) << std:: endl;
  i++;
  }
}
