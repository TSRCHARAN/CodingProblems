vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
{
        vector<int> dis(V,INT_MAX);

        dis[S]=0;

        queue<pair<int,int>> q;

        q.push({0,S});

        while(!q.empty())
        {

            auto a = q.front();

            int val = a.first, node = a.second;

            q.pop();

            for(auto c:adj[node])
            {

                if(val+c[1]<dis[c[0]])
                {

                    dis[c[0]] = (val+c[1]);

                    q.push({dis[c[0]],c[0]});

                }

            }

        }

        return dis;
}
