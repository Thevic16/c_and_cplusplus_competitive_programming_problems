#include <iostream>

using namespace std;
void merge(int A[],int left_low,int left_high,int right_low,int right_high){
        int lenght = right_high-left_low+1;
        int temp[lenght];

        int left=left_low;
        int right=right_low;

        for(int i=0;i<lenght;i++){
            if(left>left_high){
                temp[i]=A[right++];
            }
            else if(right>right_high){
                temp[i]=A[left++];
            }
            else if(A[left]<=A[right]){
                temp[i] =A[left++];
            }
            else {
                temp[i]=A[right++];
            }
        }

        for(int i=0;i<lenght;i++){
            A[left_low++]=temp[i];
        }
}

void merge_sort_util(int A[],int low,int high){
    if(low>=high){
        return;
    }
    else{
        int mid = (low + high)/2;
        //Funcion recursiva.
        merge_sort_util(A,low,mid);
        merge_sort_util(A,mid+1,high);

        //llamada funcion merge."UNIR"
        merge(A,low,mid,mid+1,high);
    }

}

void merge_sort(int A[], int lenght){
    merge_sort_util(A,0,lenght-1);
}

void printArr(int A[],int size){
    for(int i=0;i<size;i++){
        cout << A[i] <<" ";
    }
    cout <<"\n";
}


int main() {
    int A[]={2,4,6,5,3,1};
    int Arr_size = sizeof(A)/sizeof(A[0]);

    cout <<"Arreglo normal"<<endl;
    printArr(A,Arr_size);

    merge_sort(A,Arr_size);
    cout<<"Arreglo ordenado"<<endl;
    printArr(A,Arr_size);
    return 0;
}