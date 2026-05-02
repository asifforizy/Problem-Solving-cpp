#include <iostream>
using namespace std;

void increasingNumber(int n)
{

    int number = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << number ;
            number +=1;
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
        increasingNumber(n);
    }
}