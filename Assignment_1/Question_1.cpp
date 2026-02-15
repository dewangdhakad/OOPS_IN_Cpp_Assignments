/*
    File: hello_world.cpp
    Author: Dewang Dhakad
    Description:
    This program prints "Hello World" on the console
    and demonstrates the use of common C++ control characters:
        \n  - New line
        \t  - Tab space
        \a  - Alarm sound (beep)
        \r  - Carriage return
        endl - New line using stream manipulator
*/

#include <iostream>   // Required for input/output operations

using namespace std;

int main()
{
    // Basic Hello World output
    cout << "Hello World" << endl;

    // Using \n (new line)
    cout << "\nThis line is printed using \\n control character.";

    // Using endl (another way for new line)
    cout << endl << "This line is printed using endl.";

    // Using \t (tab space)
    cout << "\n\nName:\tDewang";
    cout << "\nBranch:\tComputer Science and Engineering";

    // Using \a (alarm sound - may or may not beep depending on system)
    cout << "\n\aThis line triggers an alert sound (if supported).";

    // Using \r (carriage return)
    cout << "\nCarriage Return Demo:";
    cout << "\rStart";  
    // \r moves cursor to beginning of line and overwrites text

    cout << endl;

    return 0;   // Indicates successful program execution
}
