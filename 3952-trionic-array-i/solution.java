class Solution {
    public boolean isTrionic(int[] nums) {
        int n = nums.length;
        if (n < 4) return false; // need space for 3 non-empty parts

        int i = 0;

        // 1️⃣ strictly increasing
        while (i + 1 < n && nums[i] < nums[i + 1]) {
            i++;
        }
        if (i == 0) return false;

        // 2️⃣ strictly decreasing
        int decStart = i;
        while (i + 1 < n && nums[i] > nums[i + 1]) {
            i++;
        }
        if (i == decStart) return false;

        // 3️⃣ strictly increasing (MUST exist)
        int inc2Start = i;
        while (i + 1 < n && nums[i] < nums[i + 1]) {
            i++;
        }
        if (i == inc2Start) return false;

        return i == n - 1;
    }
}

