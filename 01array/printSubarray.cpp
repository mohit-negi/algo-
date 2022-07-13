#include<iostream>

int main()
{
    int arr[] {1,2,3,4,5};
    int size{sizeof(arr)/sizeof(arr[0])};

    //To find the number of subarrays
    //we should first iterate over the whole array
    //and then iterate over the first iterator 
    //and finally traverse through all the iterations and print them

    for(int i{};i<size;i++)
    {
        for(int k{i};k<size;k++)
        {
            for(int j{i};j<=k;j++)
            {
                std::cout<<arr[j]<<',';
            }
            std::cout<<'\n';
        }
    }
    return 0;
}