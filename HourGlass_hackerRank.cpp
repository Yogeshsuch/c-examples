//============================================================================
// Name        : HourGlass_hackerRank.cpp
// Author      : Yogesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void arrSum(int arr[][6], int i, int j,int res[][4] )
{
	int test[3][3];
	int k =0;
	for(int p = i; p < 3 + i; p++)
	{
		int l = 0;
		for(int q = j; q < 3 + j; q++)
		{
			test[k][l] = arr[p][q];
			l++;
		}
		k++;
		cout<<endl;
	}

	for(int m =0; m < 3; m++)
	{
		for(int n = 0; n < 3; n++)
		{
			res[i][j] = test[m][n] + res[i][j];
		}
		if(m == 2)
			res[i][j] = res[i][j] - (test[1][0] + test[1][2]);
	}
}


int main()
{
	int arr[6][6];
	int res[4][4];


	cout<<"Enter array elements"<<endl;
	for(int i = 0; i < 6; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			res[i][j] = 0;
		}
	}
	for(int i = 0; i < 6; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	for(int i =0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			arrSum(arr,i,j,res);
		}
	}

	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}

	int temp = res[0][0];
	for(int i = 0; i < 6; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			if(temp < res[i][j])
			{
				temp = res[i][j];
			}
		}
	}

	cout<<"Max value:: "<<temp;

	return 0;
}
