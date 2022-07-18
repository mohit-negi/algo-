#include<iostream>

int main()
{   
    {
        using namespace std;
        {
            cout<<"Enter the size of the 2D array ";
            cout<<"\nfor rows :";
            int m{};
            cin>>m;

            cout<<"\n for columns :";
            int n{};
            cin>>n;

            int arr[1000][1000];

            //for filling up the array
            int temp{};

            for(int row{};row<=m-1;row++)
            {
                for(int col{};col<=n-1;col++)
                {
                    temp++;
                    arr[row][col] = temp;
                    cout<<arr[row][col]<<'\t';
                }cout<<'\n';
            }
            
            //for wave print
            
            for(int col{};col<n;col++)
            {
                if(col % 2 == 0)
                {
                    for(int row{};row<m;row++)
                    {
                        cout<<arr[row][col]<<" ";
                    }
                    
                }
                else
                {
                    for(int row{m-1};row>=0;row--)
                    {
                        cout<<arr[row][col]<<" ";
                    }
                }
                cout<<'\n';
            }

        } // namespace std;
        
    }

    return 0;
}