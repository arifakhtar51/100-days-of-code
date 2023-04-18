#include<iostream>
using namespace std;

int largst(int arr[],int n)
{
   int largest =arr[0];
   for(int i=0;i<n;i++)
   {
    if(arr[i]>largest)
    {
        largest=arr[i];
    }
   }
   return largest;

}

int main()
{
    int arr1[]={2,5,1,4,3};
    int n=5;
    int largest=largst(arr1,n);
    cout<<" the largest element in the array is:"<< largest <<endl;

    int arr2[]={10,13,7,9,8};
     n=5;
    largest=largst(arr2,n);
    cout<<"the largest element in the array is:"<< largest <<endl;
    return 0;

}
