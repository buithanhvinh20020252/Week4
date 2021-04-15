#include<iostream>
using namespace std;
int main()
{
	int arr[10000];
	int n, i, j;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			if((arr[i]+arr[j])==0)
			{
				cout << arr[i] << " " << arr[j] << endl;
			}
		}
	}
}
