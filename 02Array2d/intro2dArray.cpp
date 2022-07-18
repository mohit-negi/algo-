#include<iostream>

int main()
{
    {
        using namespace std;
        {
            int arr[5][3];

            //iterating over the elements
            int temp{};
            for(int row{};row<=4;row++)
            {
                //for iterating over the columns in each row
                for(int col{};col<=2;col++)
                {
                    arr[row][col] = temp;
                    ++temp;
                    cout<<arr[row][col];
                }
                cout<<'\n';
            }
        } // namespace std;
        
    }
    return 0;
}