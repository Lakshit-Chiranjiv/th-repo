#include <bits/stdc++.h>
using namespace std;

int func(int x,int n,int a)
{
    if(pow(a,n)<x)//then we move to recursion[a^n<no. i.e x]
    {
        return func(x,n,a+1)+func(x-pow(a,n),n,a+1);//recursion call to x & n /subtracting the part taken in x/
    }
    //specifying when the function will stop
    else if(pow(a,n)==x)//CASE 1. when equal to the no.
    {
        return 1;
    }
    else//CASE 2. in all other conditions like when array size exceeds 
    {
        return 0;
    }
}
int main()
{
    int x;
    int n;
    int a=1;
    int b;//result
    
    cin>>x>>n;///didn't take long as x=1000/
    
    b=func(x,n,a);

    cout<<b;
    
    return 0;
}