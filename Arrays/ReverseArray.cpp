#include<iostream>

using namespace std;

void reversearray(int * a,int size,int m){
int i=m+1,j=size-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}

void display(int a[],int  m){
    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[]={2,3,4,5,3,4,8,9};
    display(a,8);
    reversearray(a,8,4);
    cout<<endl;
    display(a,8);
    return 0;

}
