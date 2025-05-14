// Last updated: 5/13/2025, 7:13:40 PM
class Solution {
public:
    enum class Direction 
    {
        Right,
        Down,
        Left,
        Up
    };

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> res;
        
        Direction direction = Direction::Right;

        // boundaries that have been explored
        int top = -1;
        int right = n;
        int bottom = m;
        int left = -1;
        while (res.size() != m * n) 
        {
            switch (direction) 
            {
                case Direction::Right:
                    for (int i = left + 1; i < right; i++) 
                    {
                        res.push_back(matrix[top + 1][i]);
                    }
                    direction = Direction::Down;
                    top += 1;
                    break;
                case Direction::Down:
                    for (int i = top + 1; i < bottom; i++) 
                    {
                        res.push_back(matrix[i][right - 1]);
                    }
                    direction = Direction::Left;
                    right -= 1;
                    break;
                case Direction::Left:
                    for (int i = right - 1; i > left; i--) 
                    {
                        res.push_back(matrix[bottom - 1][i]);
                    }
                    direction = Direction::Up;
                    bottom -= 1;
                    break;
                case Direction::Up:
                    for (int i = bottom - 1; i > top; i--)
                    {
                        res.push_back(matrix[i][left + 1]);
                    }
                    direction = Direction::Right;
                    left += 1;
                    break;
                default:
                    break;
            }
        }
        return res;
    }
};