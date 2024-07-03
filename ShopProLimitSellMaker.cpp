#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    string name;
    cin>>name;
    string file_name=name+".yml";
    freopen(file_name.c_str(),"w",stdout);

    cout<<"type: sell\nname: \""<<name<<"\"\n";
    string title;
    cin>>title;
    cout<<"title: \""<<title<<"\"\n";
    int item_num;
    cin>>item_num;

    cout<<"slots:\n  - \'XXXXXXXXX\'\n";
    char itemslotstemp='A';
    int temp=0;
    for(int i=item_num;i>0;){
        cout<<"  - \'X";
        for(int j=1;j<=7;j++){
            if(i>0){
                cout<<itemslotstemp;
                i--;
                itemslotstemp++;
            }
            else{
                int leftspace=7-item_num%7;
                for(int k=1;k<=leftspace;k++) cout<<" ";
                break;
            }
        }
        cout<<"X\'\n";
    }
    cout<<"  - \'";
    string ifuppage;
    cin>>ifuppage;
    string uppagename;
    if(ifuppage=="yes"){
        cout<<"Y";
        cin>>uppagename;
    }
    else cout<<"X";
    cout<<"XXXXXXX";
    string ifdownpage;
    cin>>ifdownpage;
    string downpagename;
    if(ifdownpage=="yes"){
        cout<<"Z";
        cin>>downpagename;
    }
    else cout<<"X";
    cout<<"\'\n";

    cout<<"items: \n";
    cout<<"  X:\n    material: GLASS_PANE\n    name: ' '\n    lore:\n      - ' '\n    is-commodity: false\n";

    if(ifuppage=="yes") cout<<"  Y:\n    material: ARROW\n    name: '&f上一页'\n    lore:\n      - '&f点击前往上一页'\n    is-commodity: false\n    commands:\n      - '[open] "<< uppagename << "\'\n";
    else cout<<"#   Y:\n#     material: ARROW\n#     name: '&f上一页'\n#     lore:\n#       - '&f点击前往上一页'\n#     is-commodity: false\n#     commands:\n#       - '[open] [上一页的名字,如有需求,请自行更改]\'\n";
    
    if(ifdownpage=="yes") cout<<"  Z:\n    material: ARROW\n    name: '&f下一页'\n    lore:\n      - '&f点击前往下一页'\n    is-commodity: false\n    commands:\n      - '[open] "<< downpagename <<"\'\n";
    else cout<<"#   Z:\n#     material: ARROW\n#     name: '&f下一页'\n#     lore:\n#       - '&f点击前往下一页'\n#     is-commodity: false\n#     commands:\n#       - '[open] [下一页的名字,如有需求,请自行更改]\'\n";
    
    itemslotstemp='A';
    for(int i=1;i<=item_num;i++,itemslotstemp++){
        cout<<"  "<<itemslotstemp<<":\n    material: ";
        string material, name;
        cin>>material>>name;
        cout<<material<<"\n    name: \'"<<name<<"\'\n";
        int limit_day,limit_player,price;
        cin>>limit_day>>limit_player>>price;
        cout<<"    limit: "<<limit_day<<"\n    limit-player: "<<limit_player<<"\n    price: "<<price<<"\n";
        cout<<"    lore:\n      - '&e| &7这里可以出售你背包里面的&6 ${name}'\n      - '&e| &7收购单价 &6${price}'\n      - '&e| &7你的余额 &6${money}'\n      - ''\n      - '&e|&6 左击 &7出售 &6单个'\n      - '&e|&6 右击 &7出售 &6一组 &7获得 &6${price64}'\n      - '&e|&6 Shift + 右击 &7出售 &6背包所有 &7获得${priceAll}'\n      - ''\n      - '&e| &7限售公示:'\n      - '&e| &7每人限制出售: ${limit}'\n      - '&e| &7全服限制出售: ${allLimit}'\n      - '&e| &7您已出售: ${limit-player}'\n      - '&e| &7全服剩余: ${limit-server}'\n";
    }
    return 0;
}
