#include <bits/stdc++.h>
#define PI 3.14159265
#define INF 1e16 + 5
#define int long long
using namespace std;
int32_t main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int N;
    vector<int> arr;
    printf("Enter No of element into the array \n");
    //cout << "Enter No of element into the array" << '\n';
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cout << arr[0] << '\n';

    return EXIT_SUCCESS;
}