



#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
using namespace std;

int n,m;int a[1001][1001];int b[1001][1001];

int main(){
   
    scanf("%d %d",&n,&m);

for(int i=1;i<=n;i++){
 for(int j=1;j<=m;j++){

scanf("%d ",&b[i][j]);
 }}

for(int i=1;i<=n;i++){
 for(int j=1;j<=m;j++){
     
   if((i==1)&&(j==1)) { a[i][j]=b[i][j];}
   
   if((j==1)&&(i!=1)) {a[i][j]=a[i-1][j]+b[i][j];}
   if((i==1)&&(j!=1)) { a[i][j]=a[i][j-1]+b[i][j];}
   if((i!=1)&&(j!=1)){
   a[i][j]=min(a[i][j-1],a[i-1][j])+b[i][j];
   }
}

}
printf("%d",a[n][m]);


}
