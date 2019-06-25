#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    
    
    lb = 0;
    ub = 1e9;
    
    while(ub-lb>1){
        
        int m = (lb+ub)/2;
        //if(p(m)) lb = m;
        //else ub = m;
        
        int cnt = 1;
        int sum = 0;
        
        
        for(int j = 0;j < n;j++){
            //sum = sum + A[j];
            //if(sum >= m){
                //count = count + 1;
                //sum = 0;
            //}
            
            if(A[j] > m){
                cnt += k;
                break;
            }
            
            if(sum + A[j] > m){
                cnt++;
                sum = A[j];
            }else{
                sum += A[j];
            }
            
            
        }
        
    
        if(cnt<=k) ub = m;
        else lb = m;
        
    }
        
        printf("%d\n",ub);
    
    

  return 0;
}
