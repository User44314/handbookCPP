/*Простой способ решения проблемы — перебрать все возможные подмассивы, вычислить сумму значений в каждом подмассиве и сохранить максимальную сумму. Следующий код реализует этот алгоритм:*/

#include <iostream>

int main()
{
  int n = 8;
  int array[n] = {1,2,3,4,5,6,7,8};
  int best = 0;
  for (int a = 0; a < n; a++) {
    for (int b = a; b < n; b++) {
      int sum = 0;
      for (int k = a; k <= b; k++) {
	sum += array[k];
      }
      best = std::max(best,sum);
    }
  }
  std::cout << best << "\n";
  
  //second more effective

  int best1 = 0;
  for (int a1 = 0; a1 < n; a1++) {
    int sum1 = 0;
    for (int b1 = a1; b1 < n; b1++) {
      sum1 += array[b1];
      best1 = std::max(best1,sum1);
    }
  }
  std::cout << best1 << "\n";

  //third Algorithm

  int best2 = 0, sum2 = 0;
  for (int k2 = 0; k2 < n; k2++) {
    sum2 = std::max(array[k2],sum2+array[k2]);
    best2 = std::max(best2,sum2);
  }
  std:: cout << best2 << "\n";
}
