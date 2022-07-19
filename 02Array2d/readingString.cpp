#include<iostream>

using namespace std;

int main()
{
    char arr[1000][1000];

    int n{};
    cin>>n;

    cin.get();
    for(int i{};i<n;i++)
    {
        cin.getline(arr[i], 1000);
    }
    //

    for(int i{};i<n;i++)
    {
        cout<<arr[i]<<'\n';
    }
    return 0;
}