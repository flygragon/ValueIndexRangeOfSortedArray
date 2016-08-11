#pragma once
#include<vector>

class ValueIndexRangeOfSortedArray {
	int BiSearch(std::vector<int>& nums, int& target, int& low, int& high) {
		int mid;
		while (low <= high) {
			mid = (low + high) / 2;
			if (nums[mid] == target)
				return mid;
			else if (nums[mid] >target)
				high = mid - 1;
			else
				low = mid + 1;
		}
		return -1;
	}
public:
	std::vector<int> searchRange(std::vector<int>& nums, int target) {
		std::vector<int> res;
		int l = 0, h = nums.size() - 1, temp, len = nums.size();
		temp = BiSearch(nums, target, l, h);
		if (temp == -1) {
			res.push_back(-1);
			res.push_back(-1);
		}
		else {
			int i;
			for (i = temp; i >0 && nums[i] == nums[i - 1]; i--);
			res.push_back(i);
			for (i = temp; i <len - 1 && nums[i] == nums[i + 1]; i++);
			res.push_back(i);
		}
		return res;
	}
};