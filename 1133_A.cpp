#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    cin >> s1 >> s2;
    int h1 = (s1[0]-'0')*10 + (s1[1]-'0');
    int h2 = (s2[0]-'0')*10 + (s2[1]-'0');
    int m1 = (s1[3]-'0')*10 + (s1[4]-'0');
    int m2 = (s2[3]-'0')*10 + (s2[4]-'0');
 
    int st = h1*60 + m1,et = h2*60 + m2;
    int dur = (et-st)/2;
    
    if(dur>=60){
        int tmph = dur/60;
        int tmpm = dur - tmph*60;
        h1+=tmph;
        m1+=tmpm;
        if(m1>59){
            h1+=m1/60;
            m1 %= 60;
        }
        
        if(h1<10) cout << "0";
        cout << h1 << ":";
        if(m1<10) cout << "0";
        cout << m1 << '\n';
        
    }else{
        m1+=dur;
        if(m1>59){
            h1+=m1/60;
            m1 %= 60;
        }
        if(h1<10) cout << "0";
        cout << h1 << ":";
        if(m1<10) cout << "0";
        cout << m1 << '\n';
    }
    return 0;
}
