// ValueIndexRangeOfSortedArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"ValueIndexRangeOfSortedArray.h"

int main()
{
	int m,value;
	std::cin >> m;
	std::vector<int> MyInPut(m);
	for (int i = 0; i < m; i++)
		std::cin >> MyInPut[i];
	std::cin >> value;
	ValueIndexRangeOfSortedArray Range;
	std::vector<int> index(Range.searchRange(MyInPut, value));
	for (int i = 0, len = index.size(); i < len; i++)
		std::cout << index[i] << " ";
	std::cout << '\n';
    return 0;
}

