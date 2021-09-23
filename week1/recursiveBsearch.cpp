#include<iostream>
using namespace std;

int Recursive_BinarySearch(int array[], int l ,int r,int key)
{
	while (l <= r)
	{
		int mid = l + (r-l)/2;
		if(array[mid] == key)
		{
			return mid;
		}
		else if (array[mid] < key)
		{
			return Recursive_BinarySearch(array,mid+1,r,key);
		}
		else
		{
			return Recursive_BinarySearch(array,l,mid-1,key);
		}
		
	}
	return -1;
}

int main()
{
	int test_case,array_size,key;
	cout<<"Input no. of test cases"<<endl;
	cin>>test_case;
	int count = 0 ;
	for(int i = 0; i < test_case; i++)
	{
		cin>> array_size;
		int array[array_size];
		for(int j = 0;j < array_size; j++)
		{
			cin>> array[j];
		}
		cout<<"Input elmnt to search"<<endl;
		cin>> key;
		int l = 0,result = 0;
		int r = array_size;
		result = Recursive_BinarySearch(array,l,r-1,key);
		if(result == -1)
		{
        		cout<<"Not Present "<<array_size<<endl;;
		}
		else
		{
			cout<<"Present "<<result<<endl;
   		}
	}
	return 0;
}
