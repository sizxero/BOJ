#include <iostream>
#include <vector>
using namespace std;

struct Point
{
    int x;
    int y;
};

int cnt = 0;
int board[9][9];
vector<Point> points;
bool done = false;

bool check(Point p)
{
    int px = p.x / 3;
    int py = p.y / 3;
    for (int i = 0; i < 9; i++)
    {
        if (board[p.x][i] == board[p.x][p.y] && i != p.y)
            return false;
        if (board[i][p.y] == board[p.x][p.y] && i != p.x)
            return false;
    }
    
    for (int i = 3 * px; i < 3 * px + 3; i++)
    {
        for (int j = 3 * py; j < 3 * py + 3; j++)
        {
            if (board[i][j] == board[p.x][p.y])
            {
                if (i != p.x && j != p.y)
                    return false;
            }
        }
    }
    return true;
}

void sudoku(int x)
{
    if (x == cnt)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
                cout << board[i][j] << " ";
            cout << "\n";
        }
        done = true;
        return;
    }
    for (int j = 1; j <= 9; j++)
    {
        board[points[x].x][points[x].y] = j;
        if (check(points[x]))
            sudoku(x + 1);
        if (done)
            return;
    }
    board[points[x].x][points[x].y] = 0;
    return;
}

int main() 
{
    Point p;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> board[i][j];
            if (board[i][j] == 0)
            {
                cnt++;
                p.x = i;
                p.y = j;
                points.push_back(p);
            }
        }
    }
    sudoku(0);
}