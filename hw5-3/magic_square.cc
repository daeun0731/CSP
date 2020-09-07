void sorting(int** arr, int num){
    int i=0;
    int j=num/2;
    for (int x=1;x<=num*num;x++){
        arr[i][j]=x;
        if (x%num==0){
            i++;
        }
        else{
            i--;
            j++;
            if (i<0){
                i=num-1;
            }
            if (j>=num){
                j=0;
            }
        }
    }
}
