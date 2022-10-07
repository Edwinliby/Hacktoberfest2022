#include<stdio.h>
int main(){
  int dist[100],cost[100][100],distTemp[100];
  int n,i,j,v,k,min;
  printf("\n Enter no. of vertices : ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          printf("cost[%d][%d]=",i+1,j+1);
          scanf("%d",&cost[i][j]);
      }
  }
  printf("\n Enter the source vertex : ");
  scanf("%d",&v);
  printf("\n After Iteration - 1 : ");
  for(i=0;i<n;i++){
    dist[i]=cost[v-1][i];
    distTemp[i]=cost[v-1][i];
    printf("%d ",dist[i]);
  }
  for(k=2;k<n;k++){ //hops
    for(j=0;j<n;j++){ 
        min=99999;//checking for all the vertices
        if(v-1!=j){
            for(i=0;i<n;i++){
                if(min>distTemp[i]+cost[i][j]){
                    min=distTemp[i]+cost[i][j];
                }
            }
            if(dist[j]>min){
                dist[j]=min;
            }
        }
    }
    printf("\n After Iteration - %d : ",k);
    for(i=0;i<n;i++){
        distTemp[i]=dist[i];
        printf("%d ",dist[i]);
    }

  }
    return 0;
}