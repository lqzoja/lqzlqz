#include<bits/stdc++.h>
#define ll long long
#define For(i,a,b) for (int i=a;i<=b;i++)
#define Rep(i,a,b) for (int i=b;i>=a;i--)
#define jb "和泉正宗" 
#define xx "和泉纱雾" 
using namespace std;
ll read()
{
    ll jzq=0,lzq=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')lzq=-1;ch=getchar();}
    while(ch>='0'&&ch<='9')jzq=jzq*10+ch-'0',ch=getchar();
    return jzq*lzq;
}
int main()
{
	cout<<"jzq是"<<jb<<endl; 
	cout<<"xx是"<<xx<<endl;
	return 0;
}

