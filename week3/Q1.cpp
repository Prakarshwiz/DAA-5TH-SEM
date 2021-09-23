#include<iostream>
using namespace std;

void insertionSort(int array[], int array_size)
{
    int comparisons = 0, shifts = 0;
    for(int i = 1; i < array_size; i++)
    {
        int key = array[i];
        int j = i - 1;
        while(j >= 0 && key < array[j])
        {
            array[j + 1] = array[j];
            j = j - 1;
            comparisons++;
            shifts++;
        }
        array[j + 1] = key;
        shifts++;
    }
    for(int i = 0; i < array_size; i++)
        cout << array[i] << " ";
    cout << "\nComparisons = " << comparisons << endl;
    cout << "Shifts = " << shifts << endl;
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
      insertionSort(array, array_size);
  }
}