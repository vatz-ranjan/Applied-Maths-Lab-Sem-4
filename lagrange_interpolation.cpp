/*
    --- LAGRANGE'S INTERPOLATION METHOD ---
    --- Ranjan Kumar ---
*/

// Header File
#include<iostream>
#include<math.h>
using namespace std;

void perform_exp()
{
    int n;
    float x[11], y[11];
    float xf, yf=0;
    cout<<"\n-- Enter no of values : ";
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cout<<"\n-- Enter x"<<i<<" and y"<<i<<"\t";
        cin>>x[i]>>y[i];
    }

     cout<<"\n-- Enter xf : ";
    cin>>xf;

    for(int i=0; i<n; i++)
    {
        float temp=1;
        for (int j=0; j<n; j++)
        {
            if (i != j) 
            temp = temp * ((xf-x[j])/(x[i]-x[j]));
        }
        yf = yf + (temp*(y[i]));
    }
    cout<<"\n-- f(x) = "<<yf;
}

// Main function
int main()
{
    cout<<"\n\n";
    for (int i=0; i<40; i++) cout<<"*";
    cout<<"\n--- LAGRANGE'S INTERPOLATION METHOD ---";
    cout<<"\n--- Ranjan Kumar, 087-CSE-B-19 ---"<<endl;
    for (int i=0; i<40; i++) cout<<"*";
    cout<<"\n\n";
    perform_exp();
    return 0;
}