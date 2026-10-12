 #include<iostream>
 using namespace std;
 int main ()
 {
      
     int arr[2][2]={
        {45,45},
        {40,40}
     };
     int sum=0;
     for(int i=0; i<2; i++){
          for(int j=0; j<2; j++){
            sum=sum+arr[i][j];
         }
       
         }
         cout<<"sum of all elements"<<"="<<sum<<endl;
     return 0;
        }