#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

void print_soc(int l,int ptr)
{
    if(l == 0)
    {
        if(ptr == 0)
            cout << "戰爭策略-烽火連天的清末";
        if(ptr == 1)
            cout << "人物誌-慈禧太后傳奇";
        if(ptr == 2)
            cout << "人物誌-慈禧太后傳的秘密";
        if(ptr == 3)
            cout << "宗教團體-揭密刀槍不入的義和團";
        if(ptr == 4)
            cout << "治台方法-清朝與台灣";
        if(ptr == 5)
            cout << "司法及變法-清末的政治改革";
        if(ptr == 6)
            cout << "盜墓-盜墓筆記";
        if(ptr == 7)
            cout << "皇帝的感情生活-深宮秘辛";
        if(ptr == 8)
            cout << "清代文學-聊齋";
        if(ptr == 9)
            cout << "奇案-清末四大奇案";
    }
    else
    {
        if(ptr == 0)
            cout << "人物-你是誰?";
        if(ptr == 1)
            cout << "地理-風吹草低見牛羊";
        if(ptr == 2)
            cout << "食-吃飯我最大";
        if(ptr == 3)
            cout << "政治、軍事制度-咦?怎麼開打?";
        if(ptr == 4)
            cout << "成語-假文青";
        if(ptr == 5)
            cout << "傳說-攏是假";
        if(ptr == 6)
            cout << "搞笑故事-都給你說";
        if(ptr == 7)
            cout << "行-幾號公車";
        if(ptr == 8)
            cout << "住-大樓不要倒";
        if(ptr == 9)
            cout << "衣-黑白配";
    }
}

void print_sci(int l,int ptr)
{
    if(l == 0)
    {
        if(ptr == 0)
            cout << "磁力-羅盤的秘密";
        if(ptr == 1)
            cout << "早熟稻-撫養人口大角色";
        if(ptr == 2)
            cout << "鏡像是什麼-活字版印刷";
        if(ptr == 3)
            cout << "致命的火藥-隨時引爆";
        if(ptr == 4)
            cout << "璀璨煙花-五顏六色的奧義";
        if(ptr == 5)
            cout << "算盤-數學好好玩";
        if(ptr == 6)
            cout << "夢溪筆談選讀-大星由天降";
    }
    else
    {
        if(ptr == 0)
            cout << "錯視-受困八陣圖的秘密";
        if(ptr == 1)
            cout << "摩擦力-孔明的運輸好夥伴「木牛流馬」";
        if(ptr == 2)
            cout << "浮力-曹沖秤象的智慧";
        if(ptr == 3)
            cout << "浮力、重力-水上決戰赤壁";
        if(ptr == 4)
            cout << "重心-董卓強大的利器「馬蹬」";
        if(ptr == 5)
            cout << "醋膽素-武神關羽";
        if(ptr == 6)
            cout << "基因-三國英雄的傳承";
    }
}

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
