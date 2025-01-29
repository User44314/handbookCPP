#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool comp(string a, string b) {
  if (a.size() != b.size()) return a.size() < b.size();
  return a < b;
}

int smma(int x, int y){
  return x + y;
}

int main()
{
  vector<string> v;
  v.push_back("sbe");
  v.push_back("ffffff");
  cout <<  smma(1, 4) << '\n';
  cout << comp ("sbe" , "ffffff") << '\n';
  sort(v.begin(), v.end(), comp);
  for (auto i : v)
    cout << i << " "; 
  cout << endl;
  int a = 5;
  int *p;
  p = &a;
  std::cout << *p;
}
