#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name;

    //Taking input
    name = "Mogi";
    cout<<name<<'\n';

    //cin>>name;
    cout<<name;

    //taking input for an string array
    string ch[100];
    cin.get();  //To consume whitespaces
    int n{3};
    for(int i{};i<n;i++)
    {
        getline(cin,ch[i]);
    }

    for(int it=0;it<n;it++)
    {
        cout<<ch[it]<<'\n';
    }
    return 0;
}