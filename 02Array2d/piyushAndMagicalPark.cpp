#include<iostream>

using namespace std;

void magicalPark(char ch[1000][1000],int row,int col,int k,int s)
{
    bool flag{true};
    for(int i{};i<row;i++)
    {
        
        for(int j{};j<col;j++)
        {
            if(s < k)
            {
                flag = false;
                break;
            }
            if(ch[i][j] == '.')
            {
                s-=2;
            }
            else if(ch[i][j] == '*')
            {
                s+=5;
            }else {
                break;
            }
            if(j != col-1)
            {
                s--;
            }
        }
    }
    if(flag)
    {
        cout<<"Yes"<<'\n';
        cout<<s<<'\n';
    }else
    {
        cout<<"No"<<'\n';
    }
}
int main()
{
    
    int n{},m{},k{},s{};
    //n-row m -col
    cin>>n>>m>>k>>s;
    
    char ch[1000][1000];
    for(int row{};row<n;row++)
    {
        for(int col{};col<m;col++)
        {
            cin>>ch[row][col];
        }
    }
    magicalPark(ch,n,m,k,s);
    return 0;
}