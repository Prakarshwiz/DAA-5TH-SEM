#include <iostream>
using namespace std;
int Question3(int array[],int array_size,int diff)
{
	int count = 0;
	for (int i = 0; i < array_size; i++)
	{
		for (int j = i+1; j < array_size; j++)
		{
			if (array[i] - array[j] == diff || array[j] - array[i] == diff )
			{
				count++;
			}
		}
    	}
	return count;
}

int main()
{
	int array_size,i,test_case,diff=0;
	cout<<"Input no. of test cases"<<endl;
	cin>> test_case;
	for(int i = 0; i < test_case; i++)
	{
		cin>> array_size; 
		int array[array_size];
		for(int j = 0 ; j < array_size; j++)
		{
			cin>> array[j];
		}
		cin>> diff;
		cout<<Question3(array,array_size,diff)<<endl;	
	}
	return 0;
}
