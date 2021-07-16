/*
    --- BISECTION METHOD ---
    --- Ranjan Kumar ---
*/

// Header File
#include<iostream>
#include<math.h>
using namespace std;

// Equation function
float equation(float root)
{
    return (pow(root,3) - (2*root) - 5);
}

// Bisection method function
void bisection()
{
    int iter, flag=0;
    float eq, a, b;
    float root=0;
    cout<<"\nEnter first root: ";
    cin>>a;
    cout<<"Enter second root: ";
    cin>>b;
    cout<<"Enter number of iterations: ";
    cin>>iter;
    if(equation(a) <= 0) flag = 1;
    for (int i=0; i<iter; i++)
    {
        root = (a+b)/2;
        cout<<"\nRoot for iteration "<<i+1<<" : "<<root;
        eq = equation(root);
        if (eq < 0 && flag) a = root;
        else b = root;
    }
    cout<<"\n";
}

// Main function
int main()
{
    cout<<"\n--- BISECTION METHOD ---";
    cout<<"\n--- Ranjan Kumar, 087-CSE-B-19 ---"<<endl;
    bisection();
    return 0;
}
