/// Author : Shohaur Rahaman
/// Quick Sort Algo Implementation

#include<stdio.h>
#include<algorithm>
#include<iostream>

using namespace std;

int partition_(int ara[], int start,int end );
void Qsort(int ara[],int start,int end);

int main()
{
    int ara[7]={-8,11,-11,0,9,2,50};
    Qsort(ara,0,7);  // call Qsort()  function

    for(int i=0;i<7;i++)
        cout<<ara[i] <<" ";


    return 0;
}

void Qsort(int ara[],int start,int end)
{
    int par_index=0;

    if(start<end){
        // divided array[] into sub problem
       par_index=partition_(ara,start,end);
        Qsort(ara,start,par_index-1);
        Qsort(ara,par_index+1,end);
    }

}

int partition_(int ara[],int start,int end)
{
    int p_index=start; // initialize partition index
    int pivot=ara[end]; // the last value of the array

        for(int i=start;i<end;i++){   // check upto end-1
            if(ara[i] <= pivot ){
                swap(ara[i],ara[p_index]);
                p_index++;
            }
        }
        swap(ara[p_index],ara[end]);
        return p_index;
}


