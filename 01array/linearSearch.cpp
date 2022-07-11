#include<iostream>

int main()
{
    //we are assuming we are getting size of array first
    //and then the number of elements

    int n{};
    std::cin>>n;

    int arr[n];

    for(int i{};i<n;i++)
    {
        std::cin>>arr[i];
    }

    int key{};
    std::cin>>key;
    //now array is filled
    int i{};
    for(i;i<n;i++)
    {
        if(key == arr[i]) 
        {
            std::cout<<"Element found at :"<<i<<" position.\n";
            break;
        }
        
    }
    if(i == n)  std::cout<<"Element doesn't exist";
    return 0;
}