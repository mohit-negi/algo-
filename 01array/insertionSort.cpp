#include<iostream>
void swap(int& a,int& b)
{
    int temp{a};
    a = b;
    b = temp;
}
int main()
{
    {
        using namespace std;
        {
            int arr[] {6,2,8,3,4};
            int size{sizeof(arr)/sizeof(arr[0])};

            for(int i{};i<size-1;i++)
            {
                for(int j{i+1};j>0;j--)
                {
                    if(arr[j] < arr[j-1])
                    {
                        swap(arr[j],arr[j-1]);
                    }else
                    {
                        break;
                    }
                }
            }

            //for printing the supposedly sorted array
            for(int i{};i<size;i++)
            {
                cout<<arr[i]<<'\t';
            }

        } // namespace std
        
    }
    return 0;
}