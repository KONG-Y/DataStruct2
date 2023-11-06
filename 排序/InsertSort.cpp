/*-------------------------------------插入排序---------------------------------------*/
//时间复杂度：O(n)
//稳定性：稳定

void InsertSort(vector<int>& nums) {
	for (int i = 1; i < nums.size(); i++) {
		for (int j = i; j > 0; j--) {
			if (nums[j - 1] > nums[j]) {
				swap(nums[j - 1], nums[j]);
			}
		}
	}
}
