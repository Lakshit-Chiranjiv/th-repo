#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int n,x;
	cin>>n;
	vector<int> v,ans;
	for(int i=0;i<3*n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	int a,b,c;
	int avg;
	for(int i=0;i<3*n;i+=3)
	{
		a=v[i];
		b=v[i+1];
		c=v[i+2];
        avg=floor((a+b+c)/3);
        ans.push_back(avg);
	}
	for(int i=0;i<n;i++)
		cout<<ans[i]<<" ";
	return 0;
}