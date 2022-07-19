#include<iostream>

int main()
{
    {
        using namespace std;

        int t{};
        cin>>t;

        while(t--)
        {
            long ll{},ul{};
            bool flag{};

            cin>>ll>>ul;

            for(int i{ll};i<ul;i++)
            {
                if(i == 1 || i == 0)
                {
                    break;
                }
                flag = 1;
                for(int j{2};j <= ll;j++)
                {
                    if(j % ll == 0)
                    {
                        flag = 0;
                        break;
                    }
                }
            }
    }
    return 0;
}