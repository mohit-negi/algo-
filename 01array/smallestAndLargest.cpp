#include<iostream>

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
            cin>>arr[i];
        }

        // now going through each element in the list to find smallest and largest

        int smallest{2147483647};
        int largest{-2147483647};

        for(int i{};i<n;i++)
        {
            if(arr[i] < smallest)
            {
                smallest = arr[i];
            }
            if(arr[i] > largest)
            {
                largest = arr[i];
            }
        }
        cout<<"Largest element :"<<largest<<'\n';
        cout<<"Smallest element :"<<smallest<<'\n';
    }

    return 0;
}