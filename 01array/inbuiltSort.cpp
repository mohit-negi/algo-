#include<iostream>
#include<algorithm>

//defining an comparator to let the inbuilt sorting algorithm know how 
//to compare the operands
bool compare(int a,int b)
{
    return a<b;
}
void desSort(int arr[],int size)
{
    sort(arr,arr+size,compare);
    
}
void ascSort(int arr[],int size)
{
    sort(arr,arr+size);
}
int main()
{
    int arr[]{6,2,8,3,4};
    int size{sizeof(arr)/sizeof(arr[0])};

    //using inbuilt sort
    desSort(arr,size);

    for(int i{};i<size;i++)
    {
        cout<<arr[i]<<'\t';
    }
    return 0;
}