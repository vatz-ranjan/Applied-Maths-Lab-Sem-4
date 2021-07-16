/*
    --- REGULAR-FALSI METHOD ---
    --- Ranjan Kumar ---
*/

// Header File
#include<iostream>
#include<math.h>
using namespace std;

// Equation function
float equation(float root)
{
    return (pow(root,3) + (2*root) - 2);
}

// Regular-falsi method function
void regular()
{
    int iter;
    float eq, a, b;
    float root=0;
    cout<<"\nEnter first root: ";
    cin>>a; // a=0
    cout<<"Enter second root: ";
    cin>>b; // b=1
    cout<<"Enter number of iterations: ";
    cin>>iter; // iter=6
    if (equation(a) != 0 && equation(b) != 0 && equation(a)*equation(b) < 0)
    {
        for (int i=0; i<iter; i++)
        {
            root = (a*equation(b) - b*equation(a)) / (equation(b) - equation(a));
            cout<<"\nRoot for iteration "<<i+1<<" : "<<root;
            eq = equation(root);
            if (eq != 0)
            {
                if (eq < 0) a = root;
                else b = root;
            }
        }
    }
}

// Main function
int main()
{
    cout<<"\n--- REGULAR-FALSI METHOD ---";
    cout<<"\n--- Ranjan Kumar, 087-CSE-B-19 ---"<<endl;
    regular();
    return 0;
}
