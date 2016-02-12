#include <iostream>
#include <cstdlib>

using namespace std;

char grid [3][3] = {'1','2','3','4','5','6','7','8','9'};
char player = 'X';
void Grid()
{
  for (int i= 0; i<3; i++)
  {
    for (int j=0; j<3; j++)
    {
      cout << grid[i][j]<< " ";
    }
    cout <<endl;
  }
}

void Input()
{
  int input;
  cout <<"Presione el numero en el que desea jugar:";
  cin >> input;

  if (input == 1 )
    grid[0][0] = player;
  if (input == 2 )
    grid[0][1] = player;
  if (input == 3 )
    grid[0][2] = player;
  if (input == 4 )
    grid[1][0] = player;
  if (input == 5 )
    grid[1][1] = player;
  if (input == 6 )
    grid[1][2] = player;
  if (input == 7 )
    grid[2][0] = player;
  if (input == 8 )
    grid[2][1] = player;
  if (input == 9)
    grid[2][2] = player;
}

void TogglePlayer()
{
   player == 'X' ? player = 'O' : player = 'X';
}
int main()
{
  Grid();
  while (1)
  {
    Input();
    Grid();
    TogglePlayer();
  }
  system("pause");
  return 0;
}
