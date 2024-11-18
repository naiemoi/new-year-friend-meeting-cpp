#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a>b && a<c)||(a>c && a<b)){
        cout<<abs((a-b)+(c-a))<<endl;
    }
    else if((b>a && b<c) || (b<a && b>c)){
        cout<<abs((b-a)+(c-b))<<endl;
    } 
    else {
        cout<<abs((c-a)+(b-c))<<endl;
    }
    return 0;
}