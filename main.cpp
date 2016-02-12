#include <iostream>
#include <cstdlib>

using namespace std;

char grid [3][3] = {'1','2','3','4','5','6','7','8','9'};
char player = 'X';
int plays;

void Grid()
{
  system("clear");
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
  int userInput;
  cout <<"Presione el numero en el que desea jugar: ";
  cin >> userInput;

  if (userInput == 1 )
    {
      if (grid [0][0] == '1')
        grid[0][0] = player;
      else
      {
        cout << "Campo ocupado intente otro"<<endl;
        Input();
      }
    }
  if (userInput == 2 )
    {
      if(grid[0][1] == '2')
        grid[0][1] = player;
      else
      {
        cout << "Campo ocupado intente otro"<<endl;
        Input();
      }
    }
  if (userInput == 3 )
    {
      if(grid[0][2] == '3')
        grid[0][2] = player;
      else
      {
        cout << "Campo ocupado intente otro"<<endl;
        Input();
      }
    }
  if (userInput == 4 )
    {
      if(grid[1][0] == '4')
        grid[1][0] = player;
      else
      {
        cout << "Campo ocupado intente otro"<<endl;
        Input();
      }
    }
  if (userInput == 5 )
    {
      if(grid[1][1] == '5')
        grid[1][1] = player;
      else
      {
        cout << "Campo ocupado intente otro"<<endl;
        Input();
      }
    }
  if (userInput == 6 )
    {
      if(grid[1][2] == '6')
        grid[1][2] = player;
      else
      {
        cout << "Campo ocupado intente otro"<<endl;
        Input();
      }
    }
  if (userInput == 7 )
    {
      if(grid[2][0] == '7')
        grid[2][0] = player;
      else
      {
        cout << "Campo ocupado intente otro"<<endl;
        Input();
      }
    }
  if (userInput == 8 )
    {
      if(grid[2][1] == '8')
        grid[2][1] = player;
      else
      {
        cout << "Campo ocupado intente otro"<<endl;
        Input();
      }
    }
  if (userInput == 9)
    {
      if(grid[2][2] == '9')
        grid[2][2] = player;
      else
      {
        cout << "Campo ocupado intente otro"<<endl;
        Input();
      }
    }
}

void TogglePlayer()
{
   player == 'X' ? player = 'O' : player = 'X';
}
char Win()
{
  //Row winning for X
  if (grid[0][0] =='X' && grid[0][1] =='X' && grid[0][2] =='X')
    return 'X';
  if (grid[1][0] =='X' && grid[1][1] =='X' && grid[1][2] =='X')
    return 'X';
  if (grid[2][0] =='X' && grid[2][1] =='X' && grid[2][2] =='X')
    return 'X';

  //Column winning for X
  if (grid[0][0] =='X' && grid[1][0] =='X' && grid[2][0] =='X')
    return 'X';
  if (grid[0][1] =='X' && grid[1][1] =='X' && grid[2][1] =='X')
    return 'X';
  if (grid[0][2] =='X' && grid[1][2] =='X' && grid[2][2] =='X')
    return 'X';

  //Cross winning for X

  if (grid[0][0] =='X' && grid[1][1] =='X' && grid[2][2] =='X')
    return 'X';
  if (grid[0][2] =='X' && grid[1][1] =='X' && grid[2][0] =='X')
    return 'X';

  //Row winning for O
  if (grid[0][0] =='O' && grid[0][1] =='O' && grid[0][2] =='O')
    return 'O';
  if (grid[1][0] =='O' && grid[1][1] =='O' && grid[1][2] =='O')
    return 'O';
  if (grid[2][0] =='O' && grid[2][1] =='O' && grid[2][2] =='O')
    return 'O';

  //Column winning for O
  if (grid[0][0] =='O' && grid[1][0] =='O' && grid[2][0] =='O')
    return 'O';
  if (grid[0][1] =='O' && grid[1][1] =='O' && grid[2][1] =='O')
    return 'O';
  if (grid[0][2] =='O' && grid[1][2] =='O' && grid[2][2] =='O')
    return 'O';

  //Cross winning for O
  if (grid[0][0] =='O' && grid[1][1] =='O' && grid[2][2] =='O')
    return 'O';
  if (grid[0][2] =='O' && grid[1][1] =='O' && grid[2][0] =='O')
    return 'O';

return '/';

}

void Menu() {
  int input;
  cout <<  "Bienvenido a Tic-Tac-Toe /Welcome to Tic-Tac-Toe"<<endl;
  cout << "Desea jugar ?"<< endl;
  cout << "1-Si"<<endl;
  cout <<"2-No " <<endl;
  cin >> input;

  if (input == 1 ){
    Grid();
    while (1)
    {
      plays++;
      Input();
      Grid();
      if ( Win()=='X')
      {
        cout << "X wins! "<< endl;
        break;
      }
      else if (Win() == 'O')
      {
        cout << "O wins !!" <<endl;
        break;
      }
      else if (Win() == '/' && plays == 9)
      {
        cout << "Game is a draw";
        break;
      }
      TogglePlayer();
    }
  }
  else if( input == 2)
  {
    cout << "Gracias por utilizar esta aplicacion !!" << endl;
  }

}

int main()
{
  plays = 0;
  Menu();
  //system("pause");
  return 0;
}
