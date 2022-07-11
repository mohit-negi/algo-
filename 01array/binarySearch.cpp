#include<iostream>

int binarySearch(int arr[],int n,int key)
{
    int start{};
    int end{n};
    
    while(start<=end)
    {
        int mid=start+(end-start)/2;

        if(arr[start] == key) //first base condn.
        {
            return mid;
        }
        else if(arr[mid] > key) 
        {
            end = mid-1;
        }
        else{
            start = mid+1;
        }  
    }
}
int main()
{
    {
        using namespace std;

        cout<<"Enter the size of the array :";
        int n{};
        cin>>n;

        int arr[1000];
        for(int i{};i<n;i++)
        {   
            cout<<"\nEnter the elements :";
            cin>>arr[i];
        }
        cout<<"Enter the element to find :";
        int key{};
        cin>>key;
        
        cout<<"Element found at "<<binarySearch(arr,n,key)-1<<'\n';
    }
    return 0;
}