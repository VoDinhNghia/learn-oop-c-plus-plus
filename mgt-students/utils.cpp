#include <iostream>
#include <list>
#include <vector>

using namespace std;

class Utils
{
public:
    string* convertListToArray(list<string> lists)
    {
        string* arr = new string[lists.size()];
        int i = 0;
        for (string val : lists)
        {
            arr[i++] =  val;
        }
        return arr;
    };

    void displayList(list<string> lists)
    {
        for (string line : lists)
        {
            cout << line << endl;
        }
    };

    void displayVectorName(vector<string> lists)
    {
        for (int i = 0; i < lists.size(); i++)
        {
            cout << i + 1 << ": " << lists[i] << endl;
        }
    };
};
