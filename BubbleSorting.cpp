#include<iostream>
using namespace std;

void BubbleSort(int A[], int n)
{
	
	for(int i=0;i<n;i++)
	{
		int flag=0;
		for(int i=0;i<n-2;i++)
		{
			if(A[i]>A[i+1])
			{
				swap(A[i],A[i+1]);
				flag=1;
			}
			
			if(flag==1)
			{
				break;
			}
		}
		
	}
	
	
}
int main()
{
	int A[]={2,3,1,4,6,5};
	BubbleSort(A,6);
	for(int i=0;i<6;i++)
	{
		cout<<A[i];
	}
}
