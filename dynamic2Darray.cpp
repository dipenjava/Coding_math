#include "iostream"
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    int **arr= new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]= new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        delete[]arr[i];
    }
    delete []arr;
}

















//
// Created by 91919 on 23-07-2023.
//
