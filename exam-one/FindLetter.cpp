#include <bits/stdc++.h>
using namespace std;
int main()
{
    char name[1000];
    cin.getline(name, 1000);
    int i = 0, uppercase = 0, lowercase = 0, space = 0;
    while (name[i] != '\0')
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            uppercase++;
        }
        else if (name[i] >= 'a' && name[i] <= 'z')
        {
            lowercase++;
        }
        else
        {
            space++;
        }
        i++;
    }
    cout<<"Capital - "<< uppercase << endl;
    cout<<"Small - "<< lowercase << endl;
    cout<<"Spaces - "<< space << endl;

    return 0;
}