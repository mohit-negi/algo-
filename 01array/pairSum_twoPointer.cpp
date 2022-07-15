#include<iostream>

int main()
{
    {
        using namespace std;

        int arr[] {1,3,5,7,10,11,12,13};
        int size{sizeof(arr)/sizeof(arr[0])};

        int i{},j{size},sum{},reqSum{16};

        while(i != j)
        {
            sum = arr[i] + arr[j];
            if(sum < reqSum)
            {
                i++;
            }else if(sum > reqSum){
                j--;
            }
            if(sum == reqSum)
            {
                cout<<'['<<arr[i]<<','<<arr[j]<<']'<<'\n';
                j--;
            }
        }
    }
    return 0;
}