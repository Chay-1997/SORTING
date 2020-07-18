#include<iostream>
using namespace std;

void Selection(int Arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(Arr[j]<Arr[min])
			{
				min=j;
			}
		}
		int temp=Arr[i];
		Arr[i]=Arr[min];
		Arr[min]=temp;
	}
}

int main()
{
	int Arr[]={2,3,4,1,5,6};
	Selection(Arr,6);
	for(int i=0;i<6;i++)
	{
		cout<<Arr[i];
	}
}
