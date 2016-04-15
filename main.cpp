#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int arr[2][3][5][7] = {0};
    for(int l = 0;l < 2;l++)
    {
        for(int i = 0;i < 3;i++)
        {
            for(int j = 0;j < 5;j++)
            {
                for(int k = 0;k < 7;k++)
                {       
                    if(j == 0 && k == 0)
                        arr[l][i][j][k] = 4;//開幕
                    if(j == 0 && k == 1)
                        arr[l][i][j][k] = 4;
                    if(j == 0 && k == 5)
                        arr[l][i][j][k] = 5;//混合                              
                    if(j == 0 && k == 6)
                        arr[l][i][j][k] = 5;
                    if(j == 1 && k == 5)
                        arr[l][i][j][k] = 5;
                    if(j == 1 && k == 6)
                        arr[l][i][j][k] = 5;                                    
                    if(j == 2 && k == 4)
                        arr[l][i][j][k] = 6;//活動
                    if(j == 2 && k == 5)
                        arr[l][i][j][k] = 6;
                    if(j == 2 && k == 6)
                        arr[l][i][j][k] = 6;                                    
                    if(j == 3 && k == 4)
                        arr[l][i][j][k] = 7;//亂教
                    if(j == 3 && k == 5)
                        arr[l][i][j][k] = 8;//桌遊
                    if(j == 3 && k == 6)
                        arr[l][i][j][k] = 8;                                    
                    if(j == 4 && k == 1)
                        arr[l][i][j][k] = 6;
                    if(j == 4 && k == 2)
                        arr[l][i][j][k] = 6;
                    if(j == 4 && k == 3)
                        arr[l][i][j][k] = 6;                                    
                    if(j == 4 && k == 4)
                        arr[l][i][j][k] = 7;
                    if(j == 4 && k == 5)
                        arr[l][i][j][k] = 9;//結業
                    if(j == 4 && k == 6)
                        arr[l][i][j][k] = 9;

                    while(!arr[l][i][j][k])
                    {
                        srand( clock() );
                        arr[l][i][j][k] = rand() % 2 + 1;
                    }
                }
            }
        }
    }
    for(int l = 0;l < 2;l++)
    {
        for(int i = 0;i < 3;i++)
        {
            for(int j = 0;j < 5;j++)
            {
                for(int k = 0;k < 7;k++)
                {
                    
                    if(arr[l][i][j][k] == 1)
                        cout << "社會";
                    if(arr[l][i][j][k] == 2)
                        cout << "自然";
                    if(arr[l][i][j][k] == 4)
                        cout << "開幕";
                    if(arr[l][i][j][k] == 5)
                        cout << "混合";
                    if(arr[l][i][j][k] == 6)
                        cout << "活動";
                    if(arr[l][i][j][k] == 7)
                        cout << "亂教";
                    if(arr[l][i][j][k] == 8)
                        cout << "桌遊";
                    if(arr[l][i][j][k] == 9)
                        cout << "結業";
                    cout << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
    }
    return 0;
}
