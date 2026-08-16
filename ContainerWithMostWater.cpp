class Solution {
public:
    int maxArea(vector<int>& height) {

        int n = height.size();
        int area = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                int h;
                if (height[i] < height[j])
                    h = height[i];
                else
                    h = height[j];

                int currentArea = h * (j - i);

                if (currentArea > area)
                    area = currentArea;
            }
        }

        return area;
    }
};