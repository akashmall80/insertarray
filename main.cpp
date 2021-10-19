//Insertion in an array
#include<iostream>
using namespace std;
int main()
{
    int arr[10]={7,8,12,27,88};
    int n=sizeof(arr)/sizeof(n);
    //Print the element of an array
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Inset an element in a given index
    int index=3;
    int element=25;
    for(int i=n-1; i>=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    //Print the element after insertion of an array
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
