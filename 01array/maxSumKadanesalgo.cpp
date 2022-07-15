#include<iostream>

int main()
{
    {
        using namespace std;

        int arr[] {-4,1,3,-2,6,2,-8,-9,4};
        int size{sizeof(arr)/sizeof(arr[0])};

        int maxSum{-2343242},sum{};
        for(int i{};i<size;i++)
        {
            sum += arr[i];
            if(sum < 0)
            {
                sum = 0;
            }
            maxSum = max(maxSum,sum);
        }
        cout<<maxSum;
    }
    return 0;
}