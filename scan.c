#include <stdio.h>

int main(void){
    int d[9] = {86, 1470, 913, 1774, 948, 1509, 1022, 1750, 130};
    int n[9];
    int i, j = 0, k, l = 0, m = 0,cnt = 0,try = 0, pre[9], lowpre[9], res[9],temp = 0;

    res[0] = 143;

    while(l < 9){
        j = 0;
        m = 0;
        
        for(i = 0;i < 9; i++){

            if(d[i] > res[l]){
                pre[j] = d[i];
                j++;
                if(l == 0){
                    cnt = j;
                }
            }
            
        }
        
        printf("%d\n",j);
        
        if(l > cnt){
            temp = pre[0] - res[l];

            for(k = 0;k < j;k++){
                try = pre[k] - res[l];
                if(try < temp){
                    temp = try;
                    forans = pre[k];
                }
            }
        }else{
            temp = pre[0] - res[l];

            for(k = 0;k < j;k++){
                try = pre[k] - res[l];
                if(try > temp){
                    temp = try;
                    forans = pre[k]
                }
            }
        }
        l++;
        res[l] = forans;

    }
    
    for(i=0;i<9;i++)printf("%d\n",res[i]);

    return 0;
}