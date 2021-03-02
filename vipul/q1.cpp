#include <bits/stdc++.h>

using namespace std;

int maxMeetings(int *, int *, int);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        int ans = maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}// } Driver Code Ends


bool customSort(pair<int, int> &p1, pair<int, int> &p2){
    return p1.second < p2.second;
}

int maxMeetings(int start[], int end[], int n) {
    // Your code here
    vector<pair<int, int>> times(n);
    for(int i=0; i<n; ++i){
        times[i] = {start[i], end[i]};
    }
    sort(times.begin(), times.end(), customSort);
    int ans = 1;
    int endTime = times[0].second;
    for(int i=1; i<n; ++i){
        if(endTime<times[i].first){
            endTime = times[i].second;
            ans++;
        }
    }
    return ans;
}