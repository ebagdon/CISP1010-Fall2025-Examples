#include <iostream>

using namespace std;

int main()
{
    bool value = false;
    for (int i = 0; i < 20; i++)
    {
        if (value)
        {
            cout << "True. " << "Iteration: " << i << endl;
            value = false;
        }
        else
        {
            cout << "False. " << "Iteration: " << i << endl;
            value = true;
        }
    }

    return 0;
}