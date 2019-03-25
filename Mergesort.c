#include <stdio.h>

void mergesort(int A[],int p,int q,int r){
    int n1 = q-p+1;
    int n2 = r-q;

    L = []
    R = []

    for i in range(n1):
        L.append(A[p-1+i])
    for j in range(n2):
        R.append(A[q+j])

    L.append(float("inf"))
    R.append(float("inf"))

    i = 0
    j = 0

    for k in range(p,r):
        if L[i] < R[i]:
            A[k] = L[i]
            i = i + 1
        else:
            A[k] = R[i]
            j = j + 1
}

int main(void){
  int A[] = {3,45,22,11,7,34}

}
