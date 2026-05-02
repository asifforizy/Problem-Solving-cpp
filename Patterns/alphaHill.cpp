#include <iostream>
using namespace std;

void pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // characters
        char ch = 'A';
        int bp = i;

        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;

            if (j < bp)
                ch++;
            else
                ch--;
        }

        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        pyramid(n);
    }
}