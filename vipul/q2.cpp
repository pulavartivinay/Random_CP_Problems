#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


bool customSort(const pair<int, int> &p1, const pair<int, int> &p2){
    return p1.second < p2.second;
}
 
int activitySelection(int start[], int end[], int n){
    // Your code here
    vector<pair<int, int>> times(n);
    for(int i=0; i<n; ++i){
        times[i] = {start[i], end[i]};
    }
    sort(times.begin(), times.end(), customSort);
    int ans = 1;
    int endTime = times[0].second;
    for(int i=1; i<n; ++i){
        if(endTime<=times[i].first){
            endTime = times[i].second;
            ans++;
        }
    }
    return ans;
}

// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        int start[n], end[n];
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        
        //function call
        cout << activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends