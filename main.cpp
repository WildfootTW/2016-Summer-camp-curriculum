#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include "print_subject.h"
#include "appoint_commonsub.h"

using namespace std;


int main()
{
    restart:
    cout << endl << "==================================================================================" << endl;
    int arr[2][3][5][7] = {0};
    for(int l = 0;l < 2;l++)
    {
        int social = 0, science = 0;
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
                        if(arr[l][i][j][k] == 2)
                        {
                            science ++;
                            if(science > 7)
                                arr[l][i][j][k] = 0;
                        }
                        if(arr[l][i][j][k] == 1)
                        {
                            social ++;
                            if(social > 10)
                                arr[l][i][j][k] = 0;
                        }
                        if(i != 0)
                            arr[l][i][j][k] = arr[l][0][j][k];
                    }
                }
            }
        }
    }
    for(int l = 0;l < 2;l++)
    {
        int social[3][5][7] = {0}, science[3][5][7] = {0};
        for(int i = 0;i < 3;i++)
        {
            bool used_soc[10] = {0},used_sci[7] = {0};
            for(int j = 0;j < 5;j++)
            {
                for(int k = 0;k < 7;k++)
                {
                    
                    if(arr[l][i][j][k] == 1)
                    {
                        int time = 0;
                        cout << "社會";
                        while(1)
                        {
                            bool flag = 0;
                            srand( clock() );
                            int ptr = rand() % 10;
                            if(!used_soc[ptr])
                            {
                                if(i == 0)
                                    flag = 1;
                                else if(i == 1 && social[0][j][k] != ptr)
                                    flag = 1;
                                else if(social[0][j][k] != ptr && social[1][j][k] != ptr)
                                    flag = 1;
                            }
                            if(flag)
                            {
                                used_soc[ptr] = 1;
                                social[i][j][k] = ptr;
                                print_soc(l, ptr);
                                break;
                            }
                            time++;
                            if(time > 100)
                                goto restart;
                        }
                    }
                    if(arr[l][i][j][k] == 2)
                    {
                        int time = 0;
                        cout << "自然";
                        while(1)
                        {
                            bool flag = 0;
                            srand( clock() );
                            int ptr = rand() % 7;
                            if(!used_sci[ptr])
                            {
                                if(i == 0)
                                    flag = 1;
                                else if(i == 1 && science[0][j][k] != ptr)
                                    flag = 1;
                                else if(science[0][j][k] != ptr && science[1][j][k] != ptr)
                                    flag = 1;
                            }
                            if(flag)
                            {
                                used_sci[ptr] = 1;
                                science[i][j][k] = ptr;
                                print_sci(l, ptr);
                                break;
                            }
                            time++;
                            if(time > 100)
                                goto restart;
                        }

                    }
                    print_commonsub(arr[l][i][j][k]);
                    cout << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
    }
    return 0;
}
