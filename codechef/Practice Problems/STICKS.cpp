    #include<bits/stdc++.h>
    #define lli long long int
    using namespace std;
    int main()
    {
    	lli t;
    	cin >> t;
    	while(t--)
    	{
    		lli n;
    		cin >> n;
    		vector<lli> v;
    		while(n--)
    		{
    			lli temp;
    			cin >> temp;
    			v.push_back(temp);
    		}
    		sort(v.begin(),v.end(),[](const lli a,const lli b){
    			return a>b;
    		});
    		int check=0;
    		lli product=1;
    		lli count=1;
    		lli pre=v[0];
    		for(auto i=v.begin()+1;i!=v.end();i++)
    		{
    			if(pre==*i)
    			{
    				count++;
    			}
    			else
    			{
    				count=1;
    			}	
    			if(count>=2)
    			{
    				product*=(*i);
    				check++;
    				if(check==2)
    					break;				
    				count=0;
    			}
    			pre=*i;
    		}
    		if(check==2)
    		{
    			cout << product << endl;
    		}
    		else
    			cout << "-1" << endl;
    	}
    	return 0;
    } 
