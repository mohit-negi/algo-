#include<iostream>

using namespace std;

void readInput(char arr[],int size,char delim)
{
    char ch = cin.get();
    int i{};
    while(ch != delim)
    {
        arr[i] = ch;
        if(i == size-1) break;
        ch = cin.get();
        i++;
    }
    arr[i] = '\0';
    return;
}

int main()
{
    {
        using namespace std;

        //different method of declaration of an char array
        char ch[] = {'h','e','l','l','o'};
        char ch2[] = "hello";

        //reading input for an char array
        char arr[1000];
        //cin>>arr;
        //this stops reading when it reads '\0' or space
        //cout<<arr;
        //to get past this we use cin.get() it reads single character at a time
        
        
        int size = sizeof(arr);
        char delim = '\n';
        readInput(arr,size,delim);
        cout<<arr;


    }
    return 0;
}