#include <iostream>

int main()
{
                            // Asks user for their name
    std::cout << "What is your name user?" << std::endl;
    std::string name;       // Create string variable called name
    std::cin >> name;       // Get user input from the keyboard and store it in name
                            // Print the new number to the terminal
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}
