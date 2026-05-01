#include <iostream>
using namespace std;

void diamond(int n)
{

    for (int i = 0; i < 2 * n - 1; i++)
    {
        int stars;

        if (i < n)
            stars = i + 1;
        else
            stars = 2 * n - i - 1;
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        diamond(n);
    }
}