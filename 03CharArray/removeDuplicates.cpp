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
 return ;
}
void removeDuplicates(char arr[],int size)
{
    int prevIndex{};
    int it{1};
    for(it = 1;it<size;it++)
    {
        if(arr[prevIndex] != arr[it])
        {
            prevIndex++;
            arr[prevIndex] = arr[it];
        }
    }
    arr[prevIndex-1] = '\0';
    return ;
}
int main()
{
    char arr[1000];
    int size{sizeof(arr)};
    char delim{'\n'};

    readInput(arr,size,delim);

    removeDuplicates(arr,size);
    cout<<arr;
    return 0;
}