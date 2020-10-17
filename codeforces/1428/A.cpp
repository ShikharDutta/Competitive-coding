#include<stdio.h>
#include<stdlib.h>

int main(){
int x1,y1,x2,y2,result,t,i;
scanf("%d",&t);
for(i=0;i<t;i++){
scanf("%d\t%d\t%d\t%d",&x1,&y1,&x2,&y2);
if(x1==x2){
result = abs(y1-y2);
}
else if(y1==y2){
result = abs(x1-x2);
}
else{
result = abs(x1-x2)+abs(y1-y2)+2;
}
printf("%d\n",result);
}
return 0;
}
