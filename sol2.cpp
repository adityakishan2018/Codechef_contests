#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

long int distinct_elements(long int arr[], long int n){
   // Sorting the array
   sort(arr, arr + n);
   // Traverse the sorted array
   int count = 0;
   for (int i = 0; i < n; i++){
      // Moving the index when duplicate is found
      while (i < n - 1 && arr[i] == arr[i + 1]){
         i++;
      }
      count++;
   }
   return count;
}

int main()
{
	int T=0;
	cin>>T;
	
	long int N=0,M=0;
	
	
	while(T--)
	{
		
		cin>>N>>M;
		long int res_topics[N];
		for(int i=0;i<N;i++)
		{
			cin>>res_topics[i];
		}
		if(distinct_elements(res_topics, N)<M)
		{
			cout<<"yes"<<endl;
		}
		else if(distinct_elements(res_topics, N)==M)
		{
			cout<<"no"<<endl;
		}
		
	}
	
	
	
	return 0;
}
