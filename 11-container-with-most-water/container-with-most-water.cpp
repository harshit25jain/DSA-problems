class Solution {
public:
    int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int maxWater = 0;

    while (left < right) {
        int h = min(height[left], height[right]);
        int w = right - left;
        maxWater = max(maxWater, h * w);

        if (height[left] < height[right]) {
            ++left;
        } else {
            --right;
        }
    }
    return maxWater;    
    }
};

/*
The key observation is that the container's area is determined by the 
smaller of the two heights and the distance between them. 
I start with two pointers at the extreme ends to maximize the width. 
For each pair, I calculate the area and update the maximum. 
Then I move the pointer with the smaller height because that 
height is the limiting factor. Moving the taller line cannot help 
since the width decreases and the limiting height remains unchanged. 
By always eliminating the bottleneck, I efficiently explore all useful 
candidates and find the maximum area in O(n) time with O(1) space."

*/
