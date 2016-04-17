#include <iostream>

using namespace std;

int appoint_common_sub(int j,int k)
{
        if(j == 0 && k == 0)
            return 4;//開幕
        if(j == 0 && k == 1)
            return 4;
        if(j == 0 && k == 5)
            return 5;//混合                              
        if(j == 0 && k == 6)
            return 5;
        if(j == 1 && k == 5)
            return 5;
        if(j == 1 && k == 6)
            return 5;                                    
        if(j == 2 && k == 4)
            return 6;//活動
        if(j == 2 && k == 5)
            return 6;
        if(j == 2 && k == 6)
            return 6;                                    
        if(j == 3 && k == 4)
            return 7;//亂教
        if(j == 3 && k == 5)
            return 8;//桌遊
        if(j == 3 && k == 6)
            return 8;                                    
        if(j == 4 && k == 1)
            return 6;
        if(j == 4 && k == 2)
            return 6;
        if(j == 4 && k == 3)
            return 6;                                    
        if(j == 4 && k == 4)
            return 7;
        if(j == 4 && k == 5)
            return 9;//結業
        if(j == 4 && k == 6)
            return 9;
        return 0;
}
