#include<iostream>
int indexOfSmallest(int arr[],int start,int end)
{
    int temp{};
    int min{2523653};
    for(int j{start};j<end;j++)
    {
        if(arr[j]< min)
        {
            min = arr[j];
            temp = j;
        }
    }
    return temp; 
}
void swap(int& s,int& a)
{
    int temp = s;
    s = a;
    a = temp;
}
void selectionSort(int arr[],int size)
{
    for(int i{};i<size;i++)
    {
        int index{indexOfSmallest(arr,i,size)};
        if(arr[i] > arr[index])
        {
            swap(arr[i],arr[index]);
        }
    }
}
int main()
{
    {
        using namespace std;

        cout<<"Enter the size of the element :";
        int size{};
        cin>>size;

        cout<<"Enter the elements :";
        int arr[1000];
        for(int i{};i<size;i++)
        {
            cin>>arr[i];
        }
        //sorting the array

        selectionSort(arr,size);

        for(int i{};i<size;i++)
        {
            cout<<arr[i]<<'\n';
        } 
    }
    return 0;
}