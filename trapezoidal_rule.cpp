/*
    --- TRAPEZOIDAL RULE ---
    --- Ranjan Kumar ---
*/

// Header File
#include<iostream>
#include<math.h>
using namespace std;

// Equation function
float f(float x)
{
    return (1 / (1+x));
}

// Trapezoidal Rule function
void trapezoidal()
{
    float n, a, b;
    float h;
    float I[11];
    float result;
    float sum=0;
    cout<<"\nEnter lower limit: ";
    cin>>a;
    cout<<"Enter upper limit: ";
    cin>>b;
    cout<<"Enter number of sub-intervals: ";
    cin>>n;
    h = (b-a) / n;
    for (int i=0; i < n; i++)
    {
        I[i] = f(a + i*h) + f(a + (i+1)*h);
        sum = sum + I[i];
    }
    result = (h/2) * sum;
    cout<<"Result of integration : "<<result;
}

// Main function
int main()
{
    cout<<"\n--- TRAPEZOIDAL RULE ---";
    cout<<"\n--- Ranjan Kumar, 087-CSE-B-19 ---"<<endl;
    trapezoidal();
    return 0;
}
