#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

template <typename T>    // no need to worry about this; Mr. Vu is using this to make teaching easier
void displayList(std::vector<T> const &v);

int main()
{
    // You can follow along with any code in class here

    std::vector<std::string> names = {"Peter", "Bruce", "Steve", "Tony", "Natasha", "Clint", "Wanda", "Hope", "Danny", "Carol"};
    std::vector<int> numbers = {100, 50, 10, 1, 2, 7, 11, 17, 53, -8, -4, -9, -72, -64, -80};
    
    //prob 1 
    // int curr_index = 0;
    // while (curr_index < names.size())
    // {
    //     std::cout << names[curr_index] << " ";
    //     curr_index = curr_index + 2;
    // }
    
    //prob 2 
    int curr_index = 0;
    while (curr_index < numbers.size())
    {
        if (numbers[curr_index] % 2 == 0)
        {
            std::cout << numbers[curr_index] << " ";
            curr_index = curr_index + 1;
        }
      
    }

    //prob 3
    // int curr_index = 0;
    // int sum = 0 
    // while (curr_index < numbers.size())
    // {
    //     sum = sum + numbers[curr_index];
    //     std::cout << numbers[curr_index];
        
    //     curr_index = curr_index + 1;
    // }

    // //prob 4 
    // int curr_index = 0;
    // while (curr_index < size())
    // {
    //     if (curr_index % 2 == 1)
    //     {
    //         std::cout << numbers[curr_index];
    //     }
    //     curr_index = curr_index + 1;
    // }

    // // prob 5
    // curr_index = 0;
    // while (curr_index < names.size())
    // {
    //     if (names[curr_index] < "Thor")
    //     {
    //         std::cout << names[curr_index] << " ";

    //     }
    //     curr_index = curr_index + 1;
    // }

    //prob 6


    return 0;
}





// ignore everything down here
template <typename T>
void displayList(std::vector<T> const &v)
{
    if (v.empty())
    {
        std::cout << "[]\n";
        return;
    }

    std::cout << "[";
    for (int i = 0; i < v.size()-1; ++i)
    {
        std::cout << v[i] << ", ";
    }
    std::cout << v.back() << "]\n";
}