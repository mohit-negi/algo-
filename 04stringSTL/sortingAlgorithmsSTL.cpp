#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool compare(string a,string b)
{
    return a.length() < b.length();
}
int main()
{   
    int size{};
    cin>>size;

    string str[100];

    cin.get();  //To consume whitespaces

    for(int i{};i<size;i++)
    {
        getline(cin,str[i]);
    }
    //To sort string in lexicographical order
        //sort(str,str+size);
    //To sort string in another type of comparison
    sort(str,str+size,compare);
    for(int i{};i<size;i++)
    {
        cout<<str[i]<<'\n';
    }
    
    return 0;
}