#include<stdio.h>

void vert_pyr(){

}

int main(){
int t,p,q,s,r;
scanf("%d",&t);
while(t--){
    printf("Enter the no of rows for vertical and horizontal pyramid respectively:\n(For vertical, only odd no of rows are allowed)\n");
    scanf("%d%d",&p,&q);
    printf("***Vertical pyramid***\n\n");
    s = (p+1)/2;
    r = (p-1)/2;
    for(int i=1;i<=s;i++){
        for(int j=1;j<=s;j++){
            if(i>=j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r;j++){
            if(i+j<=(r+1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("***Horizontal pyramid***\n\n");
    for(int i=1;i<=q;i++){
        for(int j=1;j<=(2*q-1);j++){
            if(i+j>=q+1 && j-i<=q-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
}