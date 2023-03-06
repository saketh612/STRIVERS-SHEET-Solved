#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>printpascal(int num)
{
    vector<vector<int>>r(num);
    for(int i=0;i<num;i++)
    {
        r[i].resize(i+1);
        r[i][0]=r[i][i]=1;
        for(int j=1;j<i;j++)
        {
            r[i][j]=r[i-1][j-1]+r[i-1][j];
        }
    }
    return r;
}

int main()
{
    vector<vector<int>>arr;
    int n;
    cout<<"enter no of rows";
    cin>>n;
    arr=printpascal(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter no of rows";
//     cin>>n;
//     int arr[n][n]={0};
//     for(int i=0;i<n;i++)
//     {
//         arr[0][i]=1;
//     }
//     for(int i=1;i<n;i++)
//     {
//         arr[i][0]=1;
//         arr[i][i]=1;
//         for(int j=1;j<i;j++)
//         {
//             arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
//         }
//     }
    
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
//     return 0;
    
// }