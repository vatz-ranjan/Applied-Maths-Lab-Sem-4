/*
    --- GAUSS JORDAN METHOD ---
    --- Ranjan Kumar ---
*/

// Header File
#include<iostream>
#include<math.h>
using namespace std;

// Gauss Mthod Function
void gaussmethod(float a[5][5], int r, int c)
{
    for (int i=0; i<r; i++)
    {
        float temp = a[i][i];
        for (int j=0; j<c; j++) a[i][j] /= temp;

        for (int k=0; k<r; k++)
        {
            if (i != k)
            {
                float tempn = a[k][i];
                for (int j=0; j<c; j++) a[k][j] = a[k][j] - (tempn * a[i][j]);
            }
        }
    }
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++) cout<<a[i][j]<<"\t";
        cout<<"\n";
    }
    cout<<"\nAnswer : X = "<<a[0][3]<<" , Y = "<<a[1][3]<<" , Z = "<<a[2][3];

}

// Matrix Input Function
void input_matrix()
{
    float a[5][5];
    int r, c;
    cout<<"\nEnter no. of rows for matrix A : ";
    cin>>r;
    cout<<"Enter no. of columns for matrix A : ";
    cin>>c;
    cout<<"-- Enter elements of matrix A -- \n";
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        cin>>a[i][j];
    }
    cout<<"\n-- Equations : --\n";
    for (int i=0; i<r; i++) cout<<a[i][0]<<"x + "<<a[i][1]<<"y  + "<<a[i][2]<<"z = "<<a[i][3]<<endl;
    gaussmethod(a, r, c);
}

// Main function
int main()
{
    cout<<"\n\n";
    for (int i=0; i<30; i++) cout<<"*";
    cout<<"\n GAUSS JORDAN METHOD ";
    cout<<"\n Ranjan Kumar, 087-CSE-B-19 "<<endl;
    for (int i=0; i<30; i++) cout<<"*";
    cout<<"\n\n";
    input_matrix();
    return 0;
}