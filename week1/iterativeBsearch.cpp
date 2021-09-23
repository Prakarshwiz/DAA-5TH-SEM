#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the no. you want to find";
    int temp;
    cin>>temp;
    bool isFound = false;
    for(int i=0;i<n;i++){
        if(arr[i] == temp){
            isFound = true;
            break;
        }
    }
    if(isFound)
    {
        cout<<"The number isin the array\n"; 
    }
    else
    {
        cout<<"The number is not in the array\n";
    }
    return 0;
}
