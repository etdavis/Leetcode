//3861. Minimum Capacity Box
/*
You are given an integer array capacity, where capacity[i] represents the capacity of the ith box, and an integer itemSize representing the size of an item.

The ith box can store the item if capacity[i] >= itemSize.

Return an integer denoting the index of the box with the minimum capacity that can store the item. If multiple such boxes exist, return the smallest index.

If no box can store the item, return -1.
*/

public class Solution {
    public int MinimumIndex(int[] capacity, int itemSize) {
        int minCapacity = int.MaxValue;
        bool itemFits = false;
        for (int i = 0; i < capacity.Length; i++) {
            if (capacity[i] >= itemSize && capacity[i] < minCapacity) {
                minCapacity = capacity[i];
                itemFits = true;
            }
        }
        if (itemFits) {
            return capacity.IndexOf(minCapacity);
        }
        else {
            return -1;
        }
    }
}