#include<iostream>
using namespace std;
int main()
{
	int a[100], b[100];
	int n, i;
	int sumA = 0;
	int sumB = 0;
	cin >> n;
	cout << "Nhap cac phan tu cua A" << endl;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(i=0;i<n+1;i++)
	{
		sumA+=a[i];
	}
	cout <<  "Nhap cac phan tu cua B" << endl;
	for(i=0;i<n+1;i++)
	{
		cin >> b[i];
	}
	for(i=0;i<n;i++)
	{
		sumB+=b[i];
	}
	cout << "So thua la " << sumA - sumB;
}
