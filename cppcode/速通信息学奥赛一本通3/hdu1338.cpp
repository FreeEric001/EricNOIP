#include <bits/stdc++.h>
using namespace std;

int card[51];
bool isMine[51] = {false};

int main() {
    int caseCnt = 0, m, n;
    freopen("in.in", "r", stdin);
    while(cin >> m >> n) {
        memset(isMine, false, sizeof isMine);
        if(m == 0 && n == 0) break;
        caseCnt++;
        for(int i = 1; i <= n; i++) {
            cin >> card[i];
            isMine[card[i]] = true;
        }
        int winCnt = 0, biggerCard = 0;
        for(int i = n * m; i >= 1; i--) {
            if(isMine[i]) {
                if(biggerCard == 0) winCnt++;   //����û�бȡ��ҡ���ǰ���ƴ�Ŀ������ҡ�Ӯ
                else biggerCard--;              //�ñ��˵ıȡ��ҡ���ǰ���ƴ�Ŀ����ҡ��Ŀ� 
            } else biggerCard++;    //�Ǳ��˵Ŀ�
        }
        printf("Case %d: %d\n", caseCnt, winCnt);
    }
    return 0;
}