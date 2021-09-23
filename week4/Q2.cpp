#include<iostream>
using namespace std;

int c = 0;
int swaps = 0;
int partitionFunc(int array[], int l, int h)
{
    int pivot = array[l];
    int i = l, j = h;
    while(i < j)
    {
        do{
            i++;
            c++;
        }while(array[i] <= pivot);
        c--;
        do{
            j--;
            c++;
        }while(array[j] > pivot);
        c--;
        if(i < j){
            swap(array[i], array[j]);
            swaps++;
        }
    }
    swap(array[l], array[j]);
    swaps++;
    return j;
}

void quickSort(int array[], int l, int h)
{
    int j;
    if(l < h)
    {
        j = partitionFunc(array, l, h);
        quickSort(array, l, j);
        quickSort(array, j + 1, h);
    }
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
        quickSort(array, 0, array_size);
        for(int i = 0; i < array_size; i++)
            cout << array[i] << " ";
        cout << endl;
        cout << "comparisons = " << c << endl;
        cout << "Swaps = " << swaps << endl;
    }
}
