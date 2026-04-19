// class Solution {
// public:
//     vector<int> sortArray(vector<int>& nums) {


        // using STL or we can also use stable sort using stable_sort() function
        // M1
        // sort( nums.begin(), nums.end());

        // M2
        // stable_sort(nums.begin(), nums.end());
        // return nums;

        // merge  sort (M1)

        


//     }
// };




class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high) {
        int left = low;
        int right = mid + 1;
        vector<int> temp;

        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            } else {
                temp.push_back(nums[right]);
                right++;
            }
        }

        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }

        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }

    void mergeSort(vector<int>& nums, int low, int high) {
        if (low >= high) return;

        int mid = (low + high) / 2;

        mergeSort(nums, low, mid);
        mergeSort(nums, mid + 1, high);

        merge(nums, low, mid, high);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};
