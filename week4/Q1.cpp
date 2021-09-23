#include<iostream>
using namespace std;

int c = 0;
int inv = 0;
void mergeSort(int array[], int array_size)
{
    if(array_size == 0 || array_size == 1)
        return;
    int mid = array_size / 2;
    mergeSort(array, array_size - mid);
    mergeSort(array + mid, array_size - mid);
    int n1 = mid;
    int n2 = array_size - mid;
    int Lpart[n1], Rpart[n2];
    for(int i = 0; i < n1; i++)
        Lpart[i] = array[i];
    for(int j = 0; j < n2; j++)
        Rpart[j] = array[mid + j];
    int k = 0, i = 0, j = 0;
    while(i < n1 && j < n2)
    {
        if(Lpart[i] <= Rpart[j])
        {
            array[k] = Lpart[i];
            k++; i++;
            c++;
        }
        else{
            array[k] = Rpart[j];
            j++; k++;
            c++;
        }
    }
    for(; i < n1; i++)
    {
        array[k] = Lpart[i];
        k++;
    }
    for(; j < n2; j++)
    {
        array[k] = Rpart[j];
        k++;
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
        mergeSort(array, array_size);
        for(int i = 0; i < array_size; i++)
            cout << array[i] << " ";
        cout << endl;
        cout << "Comparisons = " << c << endl;
        
    }
}
