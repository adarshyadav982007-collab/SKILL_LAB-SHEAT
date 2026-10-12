    #include <iostream>
using namespace std;

int main()
{
    int r, c;
int arr[3][3]={
    {1,2,3},
    {5,6,8},
    {9,8,6}
           };

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++)
    {
    if(i==0|| i==2|| j==0||j==2)
{
    cout<<arr[i][j]<<"  ";
}
    }
    cout<<endl;
    
}
int target =11;

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++)
    {

  if(arr[i][j] == target){
      cout<<"element is found";
  }
  else{
      cout<<"element is not found";
  }
    
}

}
return 0;
}