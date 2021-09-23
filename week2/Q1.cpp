#include<iostream>
using namespace std;

int Question1(int array[],int array_size,int key,int start)
{	
	int low = 0, high = array_size - 1;
    	int result = -1;
    	while (low <= high)
    	{
		int mid = (low + high)/2;
		if (array[mid] == key)
		{
		    result = mid;
		    if(start) 
		    {
		        high = mid - 1;
		    }
		    else 
		    {
		        low = mid + 1;
		    }
		}
		else if(array[mid] > key)
		{
		    high = mid - 1;
		}
		else
		{
		    low = mid + 1;
		}
    	}
    	return result;
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
		for(int j = 0; j <array_size ; j++)
		{
			cin>> array[j];
		}
		cout<<"Input elmnt to search"<<endl;
		cin>> key;
		int first = Question1(array,array_size,key,1);	
		int last = Question1(array,array_size,key,0);
    		int count = last - first + 1;
		if(first != -1)
		{
			cout<<key<<"-"<<count<<endl;
		}
		else
		{
			cout<<"Elmnt not Found"<<endl;
		}
	}
	return 0;
}
