#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


using namespace std;
int main()
{
    std::vector<int> arr = {1, 2, 3, 5, 6, 7};
    int n = arr.size();
    auto it = std::lower_bound(std::begin(arr), std::end(arr), 4);
    if (it != std::end(arr) && *it == 4) // && short circuts so *it == 4 wont be done unless it is valid
        std::cout << "4 found";
    else
        std::cout << "4 not found";

    std::cout << std::endl;

    int x = 4;
    auto k = *lower_bound(arr.begin(), arr.end(), x);
    std::cout << k;
    if (k < n && arr[k] == x)
    {
        return 0;
    }
}
