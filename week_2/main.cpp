#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n,k =0;
    cin >> n;
    int x[n];
    for (int i=0;i<n;++i) {
        cin >> x[i];
        if (x[i] == i) {
            cout << i << endl;
            k = 1;
            break;
        }
    }
        if (k==0)
            cout << "N";
        return 0;
    }