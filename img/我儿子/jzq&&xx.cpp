#include<bits/stdc++.h>
#define ll long long
#define For(i,a,b) for (int i=a;i<=b;i++)
#define Rep(i,a,b) for (int i=b;i>=a;i--)
#define jb "��Ȫ����" 
#define xx "��Ȫɴ��" 
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
	cout<<"jzq��"<<jb<<endl; 
	cout<<"xx��"<<xx<<endl;
	return 0;
}

