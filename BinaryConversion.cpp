// GROUP 2 (KIMBERLY, JOSHUA, MARIA) //
// DECIMAL TO BINARY CONVERSION //

#include <iostream>
using namespace std;

// ITERATIVE //
int iterative(int n)
{
    // INITIALIZING VARIABLES //
    int binary = 0;
    int remainder, product = 1;

    // Calculating the remainders and quotients using while loop,
    // to convert the decimal number to its binary equivalent
    while (n != 0)
    {
        remainder = n % 2;
        binary = binary + (remainder * product);
        n = n / 2;
        product *= 10;
    }

    // PRINTING OUTPUTS //
    cout << "The binary form of the input is : " << binary << endl;
    return 0;
}

int recursive(int n);

int main()
{
    // ASK USER FOR DECIMAL NUMBER
    cout << "Enter a decimal number (must be bigger than 0) : ";
    int n;
    cin >> n;
    cout << "\n";

    while (n <= 0)
    {
        cout << "The number is invalid" << endl;
        cout << "Please re-enter a valid number : ";
        cin >> n;
        cout << "\n";
    }

    // CALLS ITERATIVE FUNCTION
    cout << "== ITERATIVE ==" << endl;
    iterative(n);
    cout << "\n";

    // CALLS RECURSIVE FUNCTION
    cout << "== RECURSIVE ==" << endl;
    cout << "The binary form of the input is : ";
    recursive(n);
    cout << "\n";
}

// RECURSION //
int recursive(int n)
{

    // BASE CASE //

    // Problem that we know the answer to
    // If the operation quotient is <=0, it stops the recursion
    if (n <= 0)
    {
        return 0;
    }

    // GENERAL CASE //

    // Where the recursive calls are made
    // Keep dividing the number by 2 and continue doing so with the quotient until it is 0
    // Binary number = the remainders of every divison starting from the last
    else
    {
        cout << (10 * recursive(n / 2) + (n % 2));
        return 0;
    }
}