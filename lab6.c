#include <stdio.h>

int main(){
    int A[6] = {1,2,3,4,5,6};
    int B[6] = {11,-12,13,14,-15,16};
    int C[] = {};
    int i, maxA, kb, k;
    float cnt;

    for(i=0, maxA; i<6; i++){
            if (A[i]<A[i+1]){
                    if ((i+1)%2==0){
                        maxA=A[i+1];
                    }
                }
        }

    for (i=0, kb=0; i<6; i++){
            if (i%2!=0){
                    if (B[i]<0){
                            kb+=1;
                        }
                }
        }

    for (i=0, k=0, cnt = 0; i<6; i++){
            C[i] = A[i] + B[i];
            cnt+=C[i];
            k+=1;
        }
        
    printf("%f\n",cnt/k);
    printf("%d\n", maxA);
    printf("%d\n", kb);
}