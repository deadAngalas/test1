#include <iostream>
#define N 100
#define M 100

using namespace std;

void array_fill(int arr[N][M],int ROW, int COL);
void array_withdrow(int arr[N][M],int ROW, int COL);

int main()
{

int arr[N][M], ROW, COL;
cout<<"Row: ";cin>>ROW;
cout<<"Col: ";cin>>COL;

array_fill(arr,ROW,COL);
array_withdrow(arr,ROW,COL);

    return 0;
}

void array_fill(int arr[N][M],int ROW, int COL){
int s = 10;
    for(int i=0;i<ROW;i++){
      for(int j=0;j<COL;j++){
        arr[i][j]=s;
        s=s-1;
        if(s==-1){s=10;}
        if(i>j){arr[i][j]=0;}
      }
    }

}
void array_withdrow(int arr[N][M],int ROW, int COL){
  for(int i=0;i<ROW;i++){
    for(int j=0;j<COL;j++){
      cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
  }
}
