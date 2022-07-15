#include<iostream>

int main()
{   
    {
        using namespace std;

        cout<<"Enter the size of the array: ";
        int size{};
        cin>>size;

        int arr[1000];
        int cumSum[1000];

        //To store the first element in the cumulative sum array
        cout<<"Enter the elements :";
        cin>>arr[0];
        cumSum[0] = arr[0];

        for(int i{1};i<size;i++)
        {
            cin>>arr[i];
            cumSum[i] = cumSum[i-1] + arr[i];
        }

        //The precomputing has been done and stored in the cumSum array

        //for traversing through all the elements in the array

        int currentSum{},max{-234234234},left{},right{};
        for(int i{};i<size;i++)
        {
            for(int j{i};j<size;j++)
            {
                currentSum = 0;

                currentSum = cumSum[j] - cumSum[i-1];

                if(currentSum > max)
                {
                    max = currentSum;
                    left = i;
                    right = j;
                }
            }
        }
        cout<<"The maximum sum subarrays :"<<max<<'\n';
        for(int i{left};i<right;i++)
        {
            cout<<arr[i]<<'\t';
        }
    }

    return 0;
}