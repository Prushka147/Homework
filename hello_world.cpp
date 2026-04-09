
#include <iostream>
#include <string>

// Main function - entry point of the program
int main() {
    std::string name;  // Variable to store user's name
    
    // Prompt user for input
    std::cout << "Enter your name: ";
    
    // Read name from standard input
    std::cin >> name;
    
    // Output greeting message
    std::cout << "Hello world from @" << name << std::endl;
    
    return 0;
}
