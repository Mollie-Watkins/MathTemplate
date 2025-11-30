// Mollie Watkins
// CIS 1202 801
// November 29, 2025

#include <iostream>
#include <cmath>

using namespace std;


int half(int);



// Name:
// Purpose:
// Parameters:
// Returns:
template <typename T>
T half(T value)
{
    return value / 2;
}



// Name: main
// Purpose:
// Returns:
int main()
{
    double a = 15.0;
    float b = 7.0;
    int c = 9;
    
    cout << "\t\tHalf tester" << endl;
    cout << "Double value " << a << ": " << half(a) << endl;
    cout << "Float value " << b << ": " << half(b) << endl;
    cout << "Int value " << c << ": " << half(c) << endl;
    cout << endl << endl;
    
    return EXIT_SUCCESS;
}



// Name:
// Purpose:
// Parameters:
// Returns:
int half(int value)
{
    return static_cast<int>(round(static_cast<float>(value) / 2));
}
