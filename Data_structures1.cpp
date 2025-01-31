#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    v.push_back(3); // [3]
    v.push_back(2); // [3,2]
    v.push_back(5); // [3,2,5]
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << ' ';
    }
    std::cout << std::endl;
    std::cout << v[0] << "\n"; // 3
    std::cout << v[1] << "\n"; // 2
    std::cout << v[2] << "\n"; // 5

    std::cout << std::endl;

    for (auto x : v)
    {
        std::cout << x << "\n";
    }

    std::cout << std::endl;
    // The function back returns the last element in the vector,
    // and the function pop_back removes the last element:

    std::cout << v.back() << "\n"; // 2
    v.pop_back();
    std::cout << std::endl;
    std::cout << v.back() << "\n"; // 5

    std::cout << std::endl;

    for (auto x : v)
    {
        std::cout << x << "\n";
    }
    std::cout << std::endl;
    std::vector<int> v1 = {2, 4, 2, 5, 1}; // The following code creates a vector with five elements
    for (auto x : v1)
    {
        std::cout << x << ' ';
    }
    std::cout << std::endl;

    // size 10, initial value 0
    std::vector<int> v2(10);
    for (auto x : v2)
    {
        std::cout << x << ' ';
    }
    std::cout << std::endl;
    // size 10, initial value 5
    std::vector<int> v3(10, 5);
    for (auto x : v3)
    {
        std::cout << x << ' ';
    }
    std::cout << std::endl;
}