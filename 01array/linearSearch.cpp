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

    bool flag{};
    for(int i{};i<n;i++)
    {
        if(key == arr[i])
        {
            flag = true;
        }
    }
    if(flag) std::cout<<"Element found";
    else    std::cout<<"Element doesn't exist";
    return 0;
}