#include<iostream>
using namespace std;

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
		bool isFound = false;
		for(int j = 0;j < array_size; j++)
		{
			if(array[j] == key)
			{
				count = j+1;
				isFound = true;
           			break;
				
			}
		}
			if(isFound)
			{
        			cout<<"Present "<<count<<endl;;
			}
			else
			{
				cout<<"Not present "<<array_size<<endl;
   			}
	}
}
