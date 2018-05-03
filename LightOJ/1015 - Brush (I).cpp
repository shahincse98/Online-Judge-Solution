#include <iostream>

using namespace std;

int main()
{
    int t, n, dust, i;

    cin >> t;

    for(i = 1; i <= t; i++) {
        unsigned long long int sum = 0;
        cin >> n;

        while(n--) {
            cin >> dust;
            if(dust > 0)
            sum += dust;
        }

        cout << "Case " << i << ": " << sum << endl;
    }
    return 0;
}

