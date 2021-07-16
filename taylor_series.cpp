/*
    --- TAYLOR SERIES METHOD ---
    --- Ranjan Kumar ---
*/

// Header File
#include<iostream>
#include<math.h>
using namespace std;

float f1(float x, float y)
{
    return (x - pow(y,2));
}

float f2(float x, float y)
{
    return (1 - (2*y*f1(x,y)));
}

float f3(float x, float y)
{
    return (-2*pow(f1(x,y),2) - (2*y*f2(x,y)));
}

float f4(float x, float y)
{
    return (-4*f1(x,y)*f2(x,y) - (2*(y*f3(x,y) + f2(x,y)*f1(x,y))));
}

float fact(float a)
{
    if (a == 1) return 1;
    else return a*fact(a-1);
}

void perform_exp()
{
    float x,y;
    float x1,y1;
    cout<<"\n-- Enter x0 and y0 : ";
    cin>>x>>y; // x=0 y=1 x1=0.1
    cout<<"-- Enter x1 : ";
    cin>>x1;
    y1 = y + ((x1-x)*f1(x,y)) +(pow((x1-x),2)*f2(x,y)/fact(2)) + (pow((x1-x),3)*f3(x,y)/fact(3)) + (pow((x1-x),4)*f4(x,y)/fact(4));
    cout<<"\n-- y(x) = "<<y1;
}

// Main function
int main()
{
    cout<<"\n\n";
    for (int i=0; i<30; i++) cout<<"*";
    cout<<"\n--- TAYLOR SERIES METHOD ---";
    cout<<"\n--- Ranjan Kumar, 087-CSE-B-19 ---"<<endl;
    for (int i=0; i<30; i++) cout<<"*";
    cout<<"\n\n";
    perform_exp();
    return 0;
}
