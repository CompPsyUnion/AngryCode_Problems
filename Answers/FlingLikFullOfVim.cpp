//
//  main.cpp
//  FlingLikFullOfVim
//
//  Created by Robert He on 2024/11/13.
//

#include<cstdio>
#include<cstring>
#include<algorithm>

const int M=77777,K=11;
const int inf=1e9+7;

void gmin(int &A,int B){A=std::min(A,B);}

int n,len,cnt_e,s[M];
char str[M];
bool key[M];

int f[M][K],g[M][K][K];

int main(){
    scanf("%d",&len);
    scanf(" %s",str+1);
    
    bool flag=true;
    for(int i=1;i<=len;i++){
        if(str[i]=='e'){
            flag=true;
            cnt_e++;
        } else {
            key[++n]=flag;
            s[n]=str[i]-'a';
            flag=false;
        }
    }
    for(int i=0;i<=n;i++)
        for(int x=0;x<K;x++) f[i][x]=inf;
    for(int i=0;i<=n;i++)
        for(int x=0;x<K;x++)
            for(int y=0;y<K;y++) g[i][x][y]=inf;
    f[0][s[1]]=0;
    for(int i=1;i<=n;i++){
        // f -> f
        for(int x=0;x<K;x++){
            if(!key[i]&&x!=s[i]) gmin(f[i][x],f[i-1][x]);
            gmin(f[i][x],f[i-1][s[i]]+2);
        }
        
        // f -> g
        for(int x=0;x<K;x++)
            for(int y=0;y<K;y++){
                if(x!=s[i]) gmin(g[i][x][y],f[i-1][x]+3);
                gmin(g[i][x][y],f[i-1][s[i]]+5);
            }
        
        // g -> f
        for(int x=0;x<K;x++){
            if(x!=s[i]) gmin(f[i][x],g[i-1][s[i]][x]);
            gmin(f[i][x],g[i-1][s[i]][s[i]]+2);
        }
        
        // g -> g
        for(int x=0;x<K;x++)
            for(int y=0;y<K;y++){
                if(x!=s[i]&&y!=s[i]) gmin(g[i][x][y],g[i-1][x][y]+1);
                if(y!=s[i]) gmin(g[i][x][y],g[i-1][s[i]][y]+3);
                if(x!=s[i]) gmin(g[i][x][y],g[i-1][x][s[i]]+3);
                gmin(g[i][x][y],g[i-1][s[i]][s[i]]+5);
            }
    }
    printf("%d\n",f[n][10]-2+2*cnt_e);
    return 0;
}
