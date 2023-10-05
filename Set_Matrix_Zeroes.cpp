void setZeroes(vector<vector<int>>& k) {
        int n=k.size();
        int m=k[0].size();
        queue<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(k[i][j]==0)
                {
                    v.push({i,j});
                }
            }
        }
        while(!v.empty())
        {
            int a=v.front().first;
            int b=v.front().second;
            v.pop();
            for(int i=0;i<n;i++)
            {
                k[i][b]=0;
            }
            for(int j=0;j<m;j++)
            {
                k[a][j]=0;
            }
        }
    }
