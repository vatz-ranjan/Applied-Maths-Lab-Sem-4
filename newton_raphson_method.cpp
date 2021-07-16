/*
    --- NEWTON-RAPHSON METHOD ---
    --- Ranjan Kumar ---
*/

// Header File
#include<iostream>
#include<math.h>
using namespace std;

// Equation function
float equation(float root)
{
    return (pow(root,3) - (3*root) - 5);
}

float der(float root)
{
    return (3*(pow(root,2)) - 3);
}

// Newton-Raphson method function
void newton()
{
    int iter;
    float x;
    cout<<"\nEnter first root: ";
    cin>>x; // x=2
    cout<<"Enter number of iterations: ";
    cin>>iter; // iter=6
    if (equation(x) != 0 && der(x) != 0)
    {
        for (int i=0; i<iter; i++)
        {
            x = (x - (equation(x)/der(x)));
            cout<<"\nRoot for iteration "<<i+1<<" : "<<x;
        }
    }
}

// Main function
int main()
{
    cout<<"\n--- NEWTON-RAPHSON METHOD ---";
    cout<<"\n--- Ranjan Kumar, 087-CSE-B-19 ---"<<endl;
    newton();
    return 0;
}
