/*
    --- ALGEBRA OF MATRICES ---
    --- Ranjan Kumar ---
*/

// Header File
#include<iostream>
#include<math.h>
using namespace std;

// Matrix Addition Function
void addition(int a[5][5], int b[5][5], int r, int c)
{
    int sum[5][5];

    for (int i=0; i<r; i++) 
        for (int j=0; j<c; j++) sum[i][j] = a[i][j]+b[i][j];

    cout<<"\n-- Addition of matrices -- \n";
    for (int i=0; i<r; i++) 
    {
        for (int j=0; j<c; j++) 
        {
            cout<<sum[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

// Matrix Transpose Function
void transpose(int a[5][5], int r, int c)
{
    int trans[5][5];
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++) trans[j][i] = a[i][j];

    cout<<"\n-- Transpose of matrix -- \n";
    for (int i=0; i<r; i++) 
    {
        for (int j=0; j<c; j++) 
        {
            cout<<trans[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

// Matrix Multiplication Function
void multiplication(int a[5][5], int b[5][5], int ra, int ca, int rb, int cb)
{
    int mul[5][5];
    
    if (ca == rb)
    {
        for (int i=0; i<ra; i++) 
        for (int j=0; j<cb; j++) mul[i][j] = 0;

        for (int i=0; i<ra; i++)
            for (int j=0; j<cb; j++) 
                for(int k=0; k<ca; k++) mul[i][j] += a[i][k]*b[k][j];

        cout<<"\n-- Multiplicaton of matrix A * matrix B -- \n";
        for (int i=0; i<ra; i++) 
        {
            for (int j=0; j<cb; j++) 
            {
                cout<<mul[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
    else
    {
        for (int i=0; i<rb; i++) 
        for (int j=0; j<ca; j++) mul[i][j] = 0;

        for (int i=0; i<rb; i++)
            for (int j=0; j<ca; j++) 
                for(int k=0; k<cb; k++) mul[i][j] += b[i][k]*a[k][j];

        cout<<"\n-- Multiplicaton of matrix B * matrix A -- \n";
        for (int i=0; i<rb; i++) 
        {
            for (int j=0; j<ca; j++) 
            {
                cout<<mul[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
}

// Matrix Input Function
void input_matrix()
{
    int a[5][5], b[5][5];
    int ra, ca, rb, cb;
    cout<<"\nEnter no. of rows for matrix A : ";
    cin>>ra;
    cout<<"Enter no. of columns for matrix A : ";
    cin>>ca;
    cout<<"-- Enter elements of matrix A -- \n";
    for (int i=0; i<ra; i++)
    {
        for (int j=0; j<ca; j++)
        cin>>a[i][j];
    }

    cout<<"\nEnter no. of rows for matrix B : ";
    cin>>rb;
    cout<<"Enter no. of columns for matrix B : ";
    cin>>cb;
    cout<<"-- Enter elements of matrix B -- \n";
    for (int i=0; i<rb; i++)
    {
        for (int j=0; j<cb; j++)
        cin>>b[i][j];
    }

    if (ra == rb && ca == cb) addition(a, b, ra, ca);
    else cout<<"\n-- Addition is not allowed --\n";
    transpose(a, ra, ca);
    if (ca == rb || cb == ra) multiplication(a, b, ra, ca, rb, cb);
    else cout<<"\n-- Multiplication is not allowed --\n";
}

// Main function
int main()
{
    cout<<"\n---  ALGEBRA OF MATRICES ---";
    cout<<"\n--- Ranjan Kumar, 087-CSE-B-19 ---"<<endl;
    input_matrix();
    return 0;
}
