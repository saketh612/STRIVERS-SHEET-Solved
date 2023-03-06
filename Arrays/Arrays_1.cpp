#include<bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>> &arr)
{
    int rows = arr.size() , columns = arr[0].size();
    vector<int>dummy_1(rows,-1);
    vector<int>dummy_2(columns,-1);
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if (arr[i][j]==0)
            {
                dummy_1[i]=0;
                dummy_2[j]=0;
            }

        }
    }
    //hello

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if (dummy_1[i]==0 || dummy_2[j]==0)
            {
                arr[i][j]=0;
            }

        }
    }

}
int main()
{
    vector<vector<int>> arr;
    arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    setZeroes(arr);
    cout << "The Final Matrix is " << endl;
    for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
}


