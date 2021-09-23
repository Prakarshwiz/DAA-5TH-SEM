#include <iostream>
using namespace std;

void Question2(int array[],int l,int r,int array_size)
{
	int flag=0;
	for(int k=1;k<=array_size;k++)
	{
		l = 1,r = array_size;
		while(l<r)
		{
			int sum = array[l]+array[r];
		    	if(sum == array[k])
		    	{	
		    		cout<<l<<","<<r<<","<<k<<endl;
		        	return;
		    	}
		    	else if(sum < array[k]) 
			{
				l++;
			}
		    	else 
		    	{
		    		r--;
			}
		}	
	}
	cout<<"Sequence not found"<<endl;
}

int main()
{
	int array_size,i,test_case;
	cout<<"Input no. of test cases"<<endl;
	cin>> test_case;
	while(test_case--)
	{
		cin>> array_size; 
		int array[array_size];
		for(i=0 ; i < array_size; i++)
		{
			cin>> array[i];
		}
		Question2(array,1,array_size,array_size);
	}
	return 0;
}