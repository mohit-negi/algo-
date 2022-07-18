#include<iostream>

int main()
{
    {
        using namespace std;
        {
            int arr[1000][1000];
            
            int m{},n{};
            cin>>m>>n;
            
            int temp{};
            for(int row{};row<m;row++)
            {
                for(int col{};col<n;col++)
                {
                    temp++;
                    arr[row][col] = temp;
                    //cout<<arr[row][col]<<'\t';
                }
                //cout<<'\n';
            }
            
            //wave print
            for(int row{};row<m;row++)
            {
               if(row % 2 == 0)
               {
                   for(int col{n-1};col>=0;col--)
                   {
                       cout<<arr[row][col]<<'\t';
                   }
               }else
               {
                   for(int col{};col<n;col++)
                   {
                       cout<<arr[row][col]<<'\t';
                   }
               }
               cout<<'\n';
               
            }
        } // namespace std;
        
    }
    return 0;
}