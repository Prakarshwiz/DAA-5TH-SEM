#include<iostream>
using namespace std;
void sorting(int array[], int array_size) //Merge Sort TimeComplexity = O(n log n)
{
    if(array_size == 0 || array_size == 1)
        return;
    int mid = array_size / 2;
    sorting(array, array_size - mid);
    sorting(array + mid, array_size - mid);
    int n1 = mid;
    int n2 = array_size - mid;
    int Lpart[n1], Rpart[n2];
    int i, j;
    for(i = 0; i < n1; i++)
        Lpart[i] = array[i];
    for(j = 0; j < n2; j++)
        Rpart[j] = array[mid + j];
    int k = 0;
    i = 0; j = 0;
    while(i < n1 && j < n2)
    {
        if(Lpart[i] <= Rpart[j])
        {
            array[k] = Lpart[i];
            i++; k++;
        }
        else{
            array[k] = Rpart[j];
            j++; k++;
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
bool duplicates(int array[], int array_size)
{
    for(int i = 0; i < array_size - 1; i++)
    {
        if(array[i] == array[i + 1])
            return true;
    }
    return false;
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
        sorting(array, array_size);
        if(duplicates(array, array_size))
            cout << "YES" <<endl;
        else
            cout << "NO" << endl;
    }
}