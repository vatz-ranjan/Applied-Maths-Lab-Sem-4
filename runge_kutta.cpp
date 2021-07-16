/*
    --- RUNGE KUTTA METHOD ---
    --- Ranjan Kumar ---
*/

// Header File
#include<iostream>
#include<math.h>
using namespace std;

float f(float x, float y, int a, int b)
{
    return (a*x + b*y);
}

void perform_exp()
{
    float xn;
    float h, x, y;
    int a,b;
    float k1 = 0.00, k2 = 0.00, k3 = 0.00, k4 = 0.00, k = 0.00;
    cout<<"Enter coefficient of x and y : ";
    cin>>a>>b;
    cout<<"-- Enter initial value of x and y : ";
    cin>>x>>y;
    cout<<"-- Enter h : ";
    cin>>h;
    cout<<"-- Enter Xn : ";
    cin>>xn;
    cout<<"\n-- f(x,y)  = "<<b<<"y + "<<a<<"x";

    do
    {
        k1 = h * f(x,y, a, b);
        k2 = h * f((x+(h/2)), (y+(k1/2)), a, b);
        k3 = h * f((x+(h/2)), (y+(k2/2)), a, b);
        k4 = h * f((x+h), (y+k3), a, b);

        k = (k1 + 2*k2 + 2*k3 + k4)/6;
        
        x = x + h;
        y = y + k;
    }while(x != xn);
    cout<<"\n-- Yn = "<<y<<endl;
}

// Main function
int main()
{
    cout<<"\n\n";
    for (int i=0; i<30; i++) cout<<"*";
    cout<<"\n--- RUNGE KUTTA METHOD ---";
    cout<<"\n--- Ranjan Kumar, 087-CSE-B-19 ---"<<endl;
    for (int i=0; i<30; i++) cout<<"*";
    cout<<"\n\n";
    perform_exp();
    return 0;
}