/// Author : Md. Shohanur Rahaman
/// Itetative Binary Search

// ara[]  must be in increasing order

#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;

int Bsearch(int ara[],int n,int x)
{
    int mid,low,high,index;

    low=0,high=n; // ara[1 -- |> n]

    while(low<=high){
        mid= (low)+(high-low)/2;

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
    int ara[7]={-8,11,-11,0,9,2,50};

    sort(ara,ara+7);

    for(int i=0;i<7;i++){
     // sorted array
        cout<<ara[i]<<" ";
    }

    int index=Bsearch(ara,6,-11); // Bsearch(array, array_size, searching value)

        printf("\nBsearch : %d\n",index);

    return 0;
}




