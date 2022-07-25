#include<iostream>
#include<cstring>

using namespace std;


int main()
{
    int n{};    //n number of strings
    cin>>n;

    cin.get();  //trick to consume '\n'

    char cstring[1000];
    char largestString[1000];
    int len{},largestLen{};
    for(int i{};i<n;i++)
    {
        cin.getline(cstring,1000);
        len = strlen(cstring);
        if(len > largestLen)
        {
            strcpy(largestString,cstring);
        }
    }
    cout<<cstring<<'\n';
    return 0;
}
