#include<iostream>

using namespace std;

void readInput(char arr[],int size,char delim)
{
    char ch = cin.get();
    int it{};
    while(ch == delim)
    {
        arr[it] = ch;
        if(it == size-1) break;
        it++;
        ch = cin.get();
    }
    return ;
}
bool checkPalindrome(char ch[],int size)
{
    int i{};
    int j{size-1};
    while(i<j)
    {
        if(ch[i] == ch[j])
        {
            cout<<ch[i]<<" "<<ch[j]<<'\n';
            i++;
            j--;
        }else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char charArr[1000];
    int size{sizeof(charArr)};
    char delim{'\n'};

    readInput(charArr,size,delim);

    cout<<boolalpha<<checkPalindrome(charArr,size);


    return 0;
}