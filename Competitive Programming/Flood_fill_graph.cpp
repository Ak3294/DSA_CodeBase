#include <iostream>
#include <vector>
using namespace std;

void dfs(int i, int j, int initialColor, int newColor, vector<vector<int>> &image)
{
    int n = image.size();
    int m = image[0].size();

    if (i < 0 || j < 0 || i >= n || j >= m || image[i][j] != initialColor)
        return;

    image[i][j] = newColor;

    dfs(i - 1, j, initialColor, newColor, image);
    dfs(i + 1, j, initialColor, newColor, image);
    dfs(i, j - 1, initialColor, newColor, image);
    dfs(i, j + 1, initialColor, newColor, image);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
{
    int initialColor = image[sr][sc];
    if (initialColor != newColor)
    {
        dfs(sr, sc, initialColor, newColor, image);
    }
    return image;
}

int main()
{
    vector<vector<int>> image = {{1, 1, 1, 1, 0},
                                 {1, 1, 0, 1, 0},
                                 {1, 0, 1, 0, 1},
                                 {1, 0, 0, 1, 1}};

    int sr = 1, sc = 1, newColor = 2;

    cout << "Original Image:" << endl;
    for (const auto &row : image)
    {
        for (int pixel : row)
        {
            cout << pixel << " ";
        }
        cout << endl;
    }

    image = floodFill(image, sr, sc, newColor);

    cout << "Image after flood fill:" << endl;
    for (const auto &row : image)
    {
        for (int pixel : row)
        {
            cout << pixel << " ";
        }
        cout << endl;
    }

    return 0;
}
