#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int array_size,i,j,flag=0;
		cin>> array_size;
		int array[array_size];
		for(i = 0; i < array_size; i++)
    {
      cin>> array[i];
    }
		sort(array, array + array_size);
		i = 0;
    j = array_size - 1;
		int sum;
		cin>>sum;
		while(i<j)
		{
			if(array[i] + array[j] == sum)
			{
				cout<< array[i]<<" "<< array[j]<<endl;
				i++;
				j--;
				flag=1;
			}
			else if( array[i] + array[j] < sum)
			{
				i++;
			}
			else
      {
			   j--;
      }
		}
		if(flag==0)
    {
		    cout<<"NO such pair exits"<<endl;
    }
	}
}
