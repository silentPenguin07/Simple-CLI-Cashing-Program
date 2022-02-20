#include <iostream>
#include <string>
#include <vector>
#include <map>
//A global variable’s value can be changed through a function without passing it as an argument

void getInput();

std::map<int, std::string> itemList = {
        {1, "apple"},
        {2, "banana"},
        {3, "mango"},
        {4, "peach"},
        {5, "pineapple"}
    };

std::vector<std::string> cart = {}; //homogeneous container

int main() 
{
    std::cout << "Welcome to the cashing program.\n";
    std::cout << "Here is our catalogue of items:\n";

    for (auto itr = itemList.begin(); itr != itemList.end(); ++itr) 
    {
        std::cout << "[ " <<(*itr).first << ", " << (*itr).second << " ]" << std::endl;
    }

    
    while (true)
    {
        getInput();
        char confirm;
        std::cout << "Press y if you want to enter another item. Press n if you are finished. >";
        std::cin >> confirm;
        if (confirm=='y')
        {
            continue;
        }
        else
        {
            break;
        }
    }
    
    return 0;
}

void getInput() 
{
    int user_input;
    std::cout << "Please enter the index of the item you would like >";
    std::cin >> user_input;
    switch (user_input)
    {
        case(1):
            cart.push_back("apple");
            break;
        case(2):
            cart.push_back("banana");
            break;

        case(3):
            cart.push_back("mango");
            break;

        case(4):
            cart.push_back("peach");
            break;

        case(5):
            cart.push_back("pineapple");
            break;
    }
    for (auto i: cart) 
    {
        std::cout << "[" << i << "] ";
    }
    std::cout << std::endl;
}