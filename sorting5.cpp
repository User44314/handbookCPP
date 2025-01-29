#include <iostream>

struct P {
  int x, y;
  bool operator<(const P &p) {
    if (x != p.x)
      return x < p.x;
    else
      return y < p.y;
  }
  int summa(){
    return x + y;
  }
};

int main(){
  struct P o;
  o.x = 5;
  o.y = 6;
  std::cout << o.x << '\n';
  std::cout << o.y << '\n';
  int a =1;
  int b =2;
  
  bool ret = o.x < o.y;
  std::cout << ret << '\n';
  std::cout << o.summa();
 
}
  
