//To find the largest sum of all the subarrays

//Algo: 1. find the sum of the all the subarray
//      2. Store the sum of the subarrays
//      3. find the largest sum out of all the sum of subarrays

#include<iostream>

int main()
{
    int arr[] {-4,1,3,-2,6,2,-8,-9,4};
    int size{sizeof(arr)/sizeof(arr[0])};

    int max{},sum{},left{},right{};
    for(int i{};i<size;i++)
    {
        for(int j{i};j<size;j++)
        {
            sum = 0;
            for(int k{i};k<=j;k++)
            {
                sum +=arr[k];
            }
            if(sum > max)
            {
                max = sum;
                left = i;
                right = j;
            }
        }
    }
    std::cout<<max<<'\n';
    for(int i{left}; i<right; i++)
    {
        std::cout<<arr[i]<<'\t';
    }
    return 0;
}