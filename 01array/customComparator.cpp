//In this sorting method we will pass a simple comparator function to
//to do the comparisons in the bubble sorting 
//we will do that by passing a function as a parameter that will do the comparisons

#include<iostream>

bool compare(int a,int b)
{
    return (a < b); //here by replacing the relational operator we can
                    //do ascending and descending sorting
}
void swap(int& i,int& j)
{
    int temp{i};
    i = j;
    j = temp;
}
void bubbleSort(int arr[],int size,bool (&cmp)(int a,int b))
{
    //for the bubbling n elements 
    for(int i{1};i<=size-1;i++)
    {
        //for swapping in unsorted array
        for(int j{};j<=(size-i-1);j++)
        {
            if(cmp(arr[j],arr[j+1]))
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()
{
    {
        using namespace std;

        cout<<"Enter the size of the array:";
        int size{};
        cin>>size;

        cout<<"Enter the elements :";
        int arr[1000];
        for(int i{};i<size;i++)
        {
            cin>>arr[i];
        }

        bubbleSort(arr,size,compare);
        for(int i{};i<size;i++)
        {
            cout<<arr[i]<<'\t';
        }

    }
    return 0;
}