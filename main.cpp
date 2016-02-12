#include <iostream>
#include <cstdlib>

using namespace std;

char grid [3][3] = {'1','2','3','4','5','6','7','8','9'};

void Grid()
{
  for (i= 0; i<3; i++)
  {
    for (j=0; j<3; j++)
    {
      cout << grid[i][j]<< " ";
    }
    cout <<endl;
  }
}
int main()
{
  Grid();
  system("pause");
  return 0;
}
