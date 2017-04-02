// week4-ssx.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
#include <cstdlib>  
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//week4-------------------
class NumberInclusiveFind 
{
public:
	vector<int> findInclusiveNumbers(vector<int>& nums) 
	{
		int m_size=nums.size();
		sort( nums.begin(),nums.end());//��������
		vector<int> res;
		for(int i=0;i<m_size;i++)
		{
			if (nums[i] != (i+1) )
			{
				//����������2��
				if(nums[i-1]!=(i+1) && nums[i+1]!=1)
				{				
					res.push_back(i+1);
				}			
			}
		}
		return res;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int>mResult;
	vector<int>mInput;
	mInput.push_back(1);
	mInput.push_back(2);
	mInput.push_back(3);
	mInput.push_back(5);
	mInput.push_back(5);
	mInput.push_back(9);
	mInput.push_back(9);
	mInput.push_back(8);
	mInput.push_back(8);
	NumberInclusiveFind m_findnum;
	mResult =m_findnum.findInclusiveNumbers(mInput) ;
	printf("-----------------------------\r\n");
	vector<int>::iterator it;
	for(it=mResult.begin();it!=mResult.end();it++)
		printf("Ԫ�أ�%d\r\n",*it);
	printf("-----------------------------\r\n");

	return 0;
}

