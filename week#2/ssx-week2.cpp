// weeks.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
#include <cstdlib>  
#include <vector>
using namespace std;

vector<int> m_array;
int move(int pos) 
{
	return (pos+m_array.at(pos)+m_array.size()) % m_array.size();
}
bool circularArrayLoop(vector<int>& nums) 
{
	m_array = nums;
	for (int i=0; i<nums.size(); i++) 
	{
		if (nums[i] == 0) 
			continue;
		int j,k;
		j=k=i;
		while (nums[i]*nums[move(k)]>0 && nums[i]*nums[move(move(k))]>0) 
		{
			j = move(j);
			k = move(move(k));
			printf("Ԫ��index��%d\r\n",j);
			if (j == k) 
			{
				//���ֻ��һ��Ԫ�صĻ�
				if (j == move(j)) 
					break;
				
				return true;
			}
		}
		return false;
	}
}



int _tmain(int argc, _TCHAR* argv[])
{
	//[2, -1, 1, 2, 2]
	vector<int> temp;
	temp.push_back(2);
	temp.push_back(-1);
	temp.push_back(1);
	temp.push_back(2);
	temp.push_back(2);
	printf("\r\n����[2, -1, 1, 2, 2]\r\n");
	bool mOutput = circularArrayLoop(temp);
	printf("\r\n�Ƿ��л���1���� �� 0����\r\n�����%d\r\n",(int)mOutput);
    printf("-----------------------------\r\n");

	return 0;
}

