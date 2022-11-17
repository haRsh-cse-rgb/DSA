#include <bits/stdc++.h>
using namespace std;


void reverse(char str[], int i, int j)
{

    while (i < j)
    {
        swap(str[i], str[j]);
        i++;
        j--;
    }
}

void reverseWord(char str[], int size)
{

    int start = 0;
    for (int i = 0; i < size; i++)
    {
        if (str[i] == ' ')
        {
            reverse(str, start, i - 1);
            start = i + 1;
        }
    }
    reverse(str, start, size - 1);
    reverse(str, 0, size - 1);

    cout<<str;
}



int main()
{
    char str[] = "my name is harsh";
    int size = sizeof(str);
    reverseWord(str, size - 1);
       return 0;
}


