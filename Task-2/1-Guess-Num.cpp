#include <bits/stdc++.h>
#define ll long long
#define itn int
#define ni int n;cin>>n; //input n
#define nmi int n,m;cin>>n>>m; //input n,m
#define forn for(int i=0;i<n;i++) //1D Array 
#define forn1 for(int i=1;i<=n;i++) //for n start 1
#define si string s;cin>>s; //input string s
#define gsi string s;getline(cin,s); //input getline string
#define forsi for(int i=0;i<s.size();i++) //string
#define for2n for(int i=0;i<n;i++)for(int j=0;j<n;j++) //2D array n*n  or searching
#define fornm for(int i=0;i<n;i++)for(int j=0;j<m;j++) //2D array n*m
#define ina int a[n];for(int i=0;i<n;i++){cin>>a[i];} //input 1D array 
#define outa for(int i=0;i<n;i++)cout<<a[i]<<" "; cout<<endl;//output 1D array //input 2D
#define in2da int a[n][m];for(int i=0;i<n;i++){for(int j=0;j<m;j++)cin>>a[i][j];} //output 2D
#define out2da for(int i=0;i<n;i++){for(int j=0;j<m;j++)cout<<a[i][j]<<" ";cout<<endl;} //output 2D
#define IO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define all(s) s.begin(),s.end()
#define tt int t=0;cin>>t; while(t--) //test cases
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define endl "\n"
using namespace std;
int main()
{
  // IO
  // #ifndef ONLINE_JUDGE
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  // #else
  // #endif
/*
#1
*/
  int rnd = rand()%999;
  // int rnd = 724;
  // to get every digit
  int d1=rnd/100;
  int d2=rnd/10 % 10;
  int d3=rnd%10;
  int hit,miss;
  cout<<"Enter 3-Digits"<<endl;
  do{
    hit = 0,miss=3;
    string guess;cin>>guess;
    if(guess[0] - '0' ==d1){hit++;miss--;}
    if(guess[1] - '0'==d2){hit++;miss--;}
    if(guess[2] - '0'==d3){hit++;miss--;}
    cout<<hit<<" hit "<<miss<<" miss"<<endl;
  }while(hit !=3);
  return 0;
}
