#include <iostream>

int main()
{
                        // Asks user for an integer
    std::cout << "Please choose an integer to be doubled" << std::endl;
    int x {0};          // Define variable x to be an integer
    std::cin >> x;      // Read integer from user and store in x
                        // Print the new number to the terminal
    std::cout << "The new number is: " << x * 2 << std::endl;
    return 0;
}
