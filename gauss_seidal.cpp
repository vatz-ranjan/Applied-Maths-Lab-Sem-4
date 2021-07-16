/*
    --- GAUSS SEIDAL METHOD ---
    --- Ranjan Kumar ---
*/

// Header File
#include<iostream>
#include<math.h>
using namespace std;

float f(int d, int c1, int c2, float v2, int c3, float v3)
{
    return ((d - (c2*v2) - (c3*v3)) / c1);
}

void perform_exp()
{
    int n;
    int a[5], b[5], c[5], d[5];
    float x = 0.00;
    float y = 0.00;
    float z = 0.00;
    cout<<"\n-- Enter no. of equations : ";
    cin>>n;
    
    for (int i=0; i<n; i++)
    {
        cout<<"-- Enter coefficient of x,y,z and constant : ";
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    }
    for (int i=0; i<n; i++)
    {
        cout<<"\n-- Equation "<<i<<" : ";
        cout<<a[i]<<"x + "<<b[i]<<"y + "<<c[i]<<"z = "<<d[i];
    }
    for (int i=0; i<4; i++)
    {
        x = f(d[0], a[0], b[0], y, c[0], z);
        y = f(d[1], b[1], a[1], x, c[1], z);
        z = f(d[2], c[2], a[2], x, b[2], y);
        cout<<"\n-- Value of x "<<i<<" : "<<x;
        cout<<"\n-- Value of y "<<i<<" : "<<y;
        cout<<"\n-- Value of z "<<i<<" : "<<z;
    }
}

// Main function
int main()
{
    cout<<"\n\n";
    for (int i=0; i<30; i++) cout<<"*";
    cout<<"\n GAUSS SEIDAL METHOD ";
    cout<<"\n Ranjan Kumar, 087-CSE-B-19 "<<endl;
    for (int i=0; i<30; i++) cout<<"*";
    cout<<"\n\n";
    perform_exp();
    return 0;
}