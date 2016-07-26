#include <iostream>
#include <vector>
#include <string>

using namespace std;


//There are 100 closed doors.
//Go through each door, with increased increments in each iteration.
//Then, display the results after finished.

int main()
{
    vector<string> doors(100,"closed");

    for(int i = 1; i <= 100; i++)
    {
        for(int j = 1; j*i <= 100; j++)
        {
            if(doors.at(i*j-1) == "closed")
            {
                doors.at(i*j-1) = "open";
                //Edit
                //cout << i << ", " << j << ", " << doors.at(i*j-1) << endl;
            }
            else
            {
                doors.at(i*j-1) = "closed";
                //Edit
                //cout << i << ", " << j << ", " << doors.at(i*j-1) << endl;
            }
        }
    }

    for(int i = 0; i < 100; i++)
    {
        cout << i << ", " << doors.at(i) << endl;
    }

    return 0;
}
