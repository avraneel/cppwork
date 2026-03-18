#include <iostream>
#include <vector>

void display(std::vector<int> slice)
{
    std::cout << "[ ";
    for (auto item : slice)
        std::cout << item << " ";
    std::cout << "]\n";
}

int main()
{
    std::vector v{1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::vector mySlice(v.begin(), v.begin() + 2);
    display(mySlice);
}