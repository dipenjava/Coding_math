#include "iostream"
using namespace std;
int HCF(int a , int b)
{
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    return a;
}
int main()
{
    cout<<"HCF of 12 and 6 is: "<<HCF(12,6);

}












//
// Created by 91919 on 20-07-2023.
//
