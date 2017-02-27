/******
还不对


******/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	for (int i = 1; i < n; ++i)
	{
		int temp = arr[i];
		for (int j = i-1; j >= 0; j--)
		{
			if(arr[j] > temp)
				arr[j+1]=arr[j];
		}
		arr[j]=temp;
	}
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << ' ';
	}
	return 0;
}