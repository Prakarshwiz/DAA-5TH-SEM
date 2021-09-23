#include<iostream>
using namespace std;

int  LinearSearch(int array[],int s,int array_size,int key,int count);

int ExponentialSearch(int array[],int array_size,int key)
{
	int count = 1;
	if(array[0] == key)
	{
		cout<<"Present"<<count<<endl;
		return count;
	}
	int i = 1;
	while(i < array_size && array[i] <= key)
	{
		i = i * 2;
		count = count + 1;
	}
	return LinearSearch(array,int(i/2),array_size,key,count);
}

 int  LinearSearch(int array[],int s,int array_size,int key,int count)
{
		int i=0;
		for(i = s; i < array_size; i++)
		{
			count = count + 1;
			if(array[i]==key)
			{
				cout<<"Present "<<count<<endl;;
				return count;
			}
		}
		cout<<"Not present "<<count<<endl;;
		return count;
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
		for(int j = 0;j <array_size ; j++)
		{
			cin>> array[j];
		}
		cout<<"Input elmnt to search"<<endl;
		cin>> key;
		int l = 0;
		int r = array_size;
		ExponentialSearch(array,array_size,key);
	}
	return 0;
}
