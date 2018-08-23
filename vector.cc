#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<char> vec;
    vec.push_back('a');
    vec.push_back('b');
    vec.push_back('c');

    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    vector<char>::iterator iter;
    for(iter = vec.begin(); iter != vec.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    int length = vec.size();
    for(int i=0;i<length;i++)
    {
       cout<<vec[i] << " ";
    }
    cout<<endl<<endl;
    cout<<" ÖÐ¹ú "<<endl;
   // system("pause");


    return 0;
}

