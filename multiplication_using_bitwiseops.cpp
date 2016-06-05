

#include<iostream>
using namespace std;
int main()
{
    int a, b, result;
    printf("\nEnter the numbers to be multiplied:");
    cin>>a>>b;       // a > b
    result = 0;
    while (b != 0)               // Iterate the loop till b == 0
    {
        if (b & 01)               // Bitwise & of the value of b with 01
        {
            result = result + a;  // Add a to result if b is odd .
        }
        a<<=1;                    // Left shifting the value contained in 'a' by 1
                                  // Multiplies a by 2 for each loop
        b>>=1;                    // Right shifting the value contained in 'b' by 1.
    }
    cout<<result<<endl;
    return 0;
}