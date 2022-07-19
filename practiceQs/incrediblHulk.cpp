#include<iostream>
#include<cmath>
//unsolved please help
int main()
{
    {
        using namespace std;
        int t{};
        cin>>t;

        while(t--)
        {
            int n{};
            cin>>n;

            int it{},k{},minSteps{};
            while(true)
            {
                k = pow(it,2);
                int remSteps{n-k};
                minSteps = min(minSteps,remSteps);

                if(k > n)
                    break;
                it++;
            }
            //int steps {it};
            cout<<minSteps<<'\n';
        }
        
    }


    return 0;
}