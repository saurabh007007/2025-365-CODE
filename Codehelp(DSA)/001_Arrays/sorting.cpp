#include<iostream>
#include<vector>
using namespace std;
void Swap01(std::vector <int> &num){
 int l=0;
 int h=num.size()-1;
 while(l<h){
   if(num[l]==0 && num[h]==1){
    int t=num[l];
    num[l]=num[h];
    num[h]=t;
    l++;
    l--;
   }else if(num[l]==0){
    l++;
   }else if(num[h]==1){
    h++;
   }
 }


}
int main(){
vector<int> v={1,0,1,1,1,1,0,0,0,0};
Swap01(v);
for(auto a:v){
    cout<<a;
}


    return 0;
}
