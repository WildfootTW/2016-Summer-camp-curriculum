#include <iostream>

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

void print_commonsub(int n)
{
        if(n == 4)
            cout << "開幕";
        if(n == 5)
            cout << "混合";
        if(n == 6)
            cout << "活動";
        if(n == 7)
            cout << "亂教";
        if(n == 8)
            cout << "桌遊";
        if(n == 9)
            cout << "結業";
}
