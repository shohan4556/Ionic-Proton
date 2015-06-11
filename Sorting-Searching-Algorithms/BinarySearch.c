/// Author : Md. Shohanur Rahaman
/// Itetative Binary Search

// ara[]  must be in increasing order
#include<stdio.h>

int Bsearch(int ara[],int n,int x)
{
    int mid,low,high,index;

    low=0,high=n; // ara[1 -- |> n]

    while(low<=high){
        mid= (low+high)/2;

        if(x<ara[mid]){    // 1,3,4,6,8,10   searching value x=3; if --|> 3<6
            high=mid-1;
        }
        else if( x >ara[mid] ){
            low=mid+1;
        }
        else                 // found the desired value !
        return mid;
    }

}

int main()
{
    int ara[6]={1,3,4,6,8,10};

    int index=Bsearch(ara,6,10); // Bsearch(array, array_size, searching value)

        printf("%d\n",index);

    return 0;
}



