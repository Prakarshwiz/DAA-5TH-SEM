#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int JumpSearch(int array[], int array_size,int key)
{
	int step = sqrt(array_size);
	int prev = 0,count = 0;	
	while (array[min(step,array_size)-1] < key)
	{	
		count = count +1;
		prev = step;
		step = step + sqrt(array_size);
		if(prev >= array_size)
		{
			cout<<"Not present "<<endl;
			return count;
		}
		
	}
	while(array[prev] < key)
	{
		
		prev = prev + 1;
		
		if (prev == min(step,array_size))
		{
			cout<<"Not present "<<count<<endl;
			return count;
		}
		count = count + 1;
	}
	if (array[prev] == key)
	{
		count = count + 1;
		cout<<"Present "<<count<<endl;
		return count;
	}
	cout<<"Not present "<<count<<endl;
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
		for(int j = 0;j < array_size ; j++)
		{
			cin>> array[j];
		}
		cout<<"Input elmnt to search"<<endl;
		cin>> key;
		JumpSearch(array,array_size,key);
	}
	return 0;
}

