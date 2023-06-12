//
// Created by ereno on 10/06/2023.
//

#include <iostream>
#include <string>

using namespace std;

std::string reverse_string(const std::string &str) {
    std::string reversed;
    // Write your code below this line

    const char* start = str.c_str();                    // Pointer to the first character
    const char* end = str.c_str() + str.size() - 1;     // Pointer to the last character
//
    //cout << start[0];
    while (end >= start) {
        reversed.push_back(*end);   // Append the character at the end pointer to the reversed string
        end--;
    }
//
//    cout << str_ptr;
    // Write your code abocve this line
    return reversed;
}




int main() {
    std::string input = "Hello, World!";
    std::string reversed = reverse_string(input);

    cout << reversed;

}