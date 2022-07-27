#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
    char str[100] = "This is an example";

    char *ptr = strtok(str," ");    //it will give the address of the string before the first delimitter

    //cout<<ptr<<'\n';

    //ptr = strtok(NULL," ");     //it will NULLify the first token
    //cout<<ptr<<'\n';

    //we can use the while loop to tokenise the strings

    while(ptr != NULL)
    {
        cout<<ptr<<'\t';
        ptr = strtok(NULL," ");
    }

    return 0;
}