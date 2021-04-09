#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;



int main()
{
	int T=0;
	cin>>T;
	
	long int N=0,M=0;
	
	
	while(T--)
	{
		int flag=0;
		long int switches=1;
		cin>>N>>M;
		long long int a=0,b=0;
	//	long long int F[N],C[M];
		
		vector <long long int> F;
		vector <long long int> C;
		
		for(int i=0;i<N;i++)
		{
			cin>>a;
			F.push_back(a);
		//	a=0;
		}
		
		for(int i=0;i<M;i++)
		{
			cin>>b;
			C.push_back(b);
			//b=0;
		}
		
		reverse(F.begin(), F.end());
		reverse(C.begin(), C.end());
		
		while(!C.empty()  &&  !F.empty())
		{
			if(C.back()<F.back())
			{
			    if(flag==0){
			    switches+=1;
				flag=1;
			    }
				
				C.pop_back();
			}
			
			if(C.back()>F.back())
			{
			    if(flag==1){
			      switches+=1;
				flag=0;
			    }
				
				F.pop_back();
			}
			
			
		}
		cout<<switches<<endl;
	}
	
	
	
	return 0;
}
