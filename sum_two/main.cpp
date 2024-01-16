#include <iostream>

int main()
{
                        // Asks user for an integer
    std::cout << "Please choose an integer" << std::endl;
    int x {0};          // Define variable x to be an integer
    std::cin >> x;      // Read integer from user and store in x
                        // Asks user for a second integer
    std::cout << "Choose another integer" << std::endl;
    int y {0};          // Define variable y to be an integer
    std::cin >> y;      // Read integer from user and store in y
                        // Print the new number to the terminal
    std::cout << x << " + " << y << " is " << x + y << std::endl;
    return 0;
}
