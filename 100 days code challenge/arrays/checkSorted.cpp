#include<iostream>
using namespace std;

bool isSorted(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=arr[i-1])
        {

        }
        else{
            return false;
        }
    }
    return true;
    
}
int main()
{
    int arr[]={1,2,3,3,4,4,5};
    int n=7;
    printf("%s", isSorted(arr, n) ? "True" : "False");
}