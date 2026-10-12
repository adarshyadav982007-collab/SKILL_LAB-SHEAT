  #include <iostream>
using namespace std;
int main()
{
   int sum=0;
   int arr[2][2]={
       {5,3},
       {9,5}
   };
   for(int j=0; j<2; j++){
       int sum=0;
   for(int i=0; i<2; i++){
           sum=sum+arr[i][j];
       }
       cout<<"sum of row"<<j+1<<"="<<sum<<endl;
       cout<<endl<<endl;
   }
    return 0;
} 