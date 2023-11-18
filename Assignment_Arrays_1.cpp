// 1.
#include <iostream>
using namespace std;
int main()
{
    int a[5], p = 1;
    cout << "Enter the elements in the array :";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        p *= a[i];
    }

    cout << p;

    return 0;
}

// 2.
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int a[5], p = 1;
    cout << "Enter the elements in the array :";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    int l = a[0];
    int sl = INT_MIN;

    for (int i = 1; i < 5; i++)
    {
        if (a[i] > l)
        {
            sl = l;
            l = a[i];
        }
        else if (a[i] > sl)
        {
            sl = a[i];
        }
    }

    cout << l << " " << sl;

    return 0;
}

// 3.
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int a[5], p = 1;
    cout << "Enter the elements in the array :";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    int smallest = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }

    cout << smallest;

    return 0;
}

// 4.
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int a[5], p = 1;
    cout << "Enter the elements in the array :";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] == a[j])
            {
                cout << "Duplicate exist";
                return 0;
            }
        }
    }
    cout << "Duplicate doesn't exist";

    return 0;
}

// 5.
//output - 49