//
// Created by JiekunZhu on 2020/12/27.
//

void inplace_swap(int *x, int *y){
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int a[], int cnt){
    int l, r;
    for (l = 0,  r = cnt-1; r > l; r--, l++){
        inplace_swap(&a[l], &a[r]);
    }
}