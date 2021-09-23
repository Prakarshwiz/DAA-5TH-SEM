#include<iostream>
using namespace std;

void selectionSort(int array[], int array_size)
{
    int minm, pos, comparisons = 0, swaps = 0;
    for(int i = 0; i < array_size - 1; i++)
    {
        minm = array[i];
        pos = i;
        for(int j = i + 1; j < array_size; j++)
        {
            if(array[j] < minm)
            {
                minm = array[j];
                pos = j;
            }
            comparisons++;
        }
        if(pos != i)
        {
            int temp = array[i];
            array[i] = array[pos];
            array[pos] = temp;
            swaps++;
        }
    }
    for(int i = 0; i < array_size; i++)
        cout << array[i] << " ";
    cout << "\nComparisons = " << comparisons << endl;
    cout << "Swaps = " << swaps << endl;
}

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
      int array_size;
      cin >> array_size;
      int *array = new int[array_size];
      for(int i = 0; i < array_size; i++)
        cin >> array[i];
      selectionSort(array, array_size);
  }
}