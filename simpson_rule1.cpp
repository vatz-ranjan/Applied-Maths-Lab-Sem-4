/*
    --- SIMPSON 1/3rd RULE ---
    --- Ranjan Kumar ---
*/

// Header File
#include<iostream>
#include<math.h>
using namespace std;

// Equation function
float f(float x)
{
    return (sqrt(x) * exp(-x));
}

// Simpson 1/3rd Rule function
void simpson()
{
    float n, a, b;
    float h;
    float result;
    float sum=0, sum2=0, sum3=0;

    cout<<"\nEnter lower limit: ";
    cin>>a; // a = 0.5
    cout<<"Enter upper limit: ";
    cin>>b; // b = 0.7
    cout<<"Enter number of sub-intervals: ";
    cin>>n; // n = 4
    h = (b-a) / n;

    sum = f(a) + f(b);

    for (int i=1; i<n; i= i+2)
    {
        sum2 = sum2 + f(a+i*h);
    }

    for (int i=2; i< n; i=i+2)
    {
        sum3 = sum3 + f(a+i*h);
    }
    
    result = (h/3) *  (sum + 4*sum2 + 2*sum3);
    cout<<"Result of integration : "<<result;
}

// Main function
int main()
{
    cout<<"\n--- SIMPSON 1/3rd RULE ---";
    cout<<"\n--- Ranjan Kumar, 087-CSE-B-19 ---"<<endl;
    simpson();
    return 0;
}
