/*
    --- SIMPSON 3/8th RULE ---
    --- Ranjan Kumar ---
*/

// Header File
#include<iostream>
#include<math.h>
using namespace std;

// Equation function
float f(float x)
{
    return (1/(1 + pow(x,2)));
}

// Simpson 3/8th Rule function
void simpson()
{
    float n, a, b;
    float h;
    float result;
    float sum=0, sum2=0, sum3=0;

    cout<<"\nEnter lower limit: ";
    cin>>a; // a = 0
    cout<<"Enter upper limit: ";
    cin>>b; // b = 6
    cout<<"Enter number of sub-intervals: ";
    cin>>n; // n = 6
    h = (b-a) / n;

    sum = f(a) + f(b);

    for (int i=1; i<n; i++)
    {
        if (i%3 == 0) sum3 = sum3 + f(a + i*h);
        else sum2 = sum2 + f(a+i*h);
    }
    
    result = (3*h/8) *  (sum + 3*sum2 + 2*sum3);
    cout<<"Result of integration : "<<result;
}

// Main function
int main()
{
    cout<<"\n--- SIMPSON 3/8th RULE ---";
    cout<<"\n--- Ranjan Kumar, 087-CSE-B-19 ---"<<endl;
    simpson();
    return 0;
}
