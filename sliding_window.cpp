#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,3,4,5,6,};

     vector<int> ans ;

   int k = 3 ;
   int n = nums.size();

// n- k issliye liya kyuki agr array ke andar uthnhe window ban nahi pate jitnhe bann nhin chaiye 
   for(int i= 0 ; i<= n-k ;i++){

    // pehla element hamesha assume kr rahe hai maximum number
    int maxnum = nums[i];

    // i+k issliye kyuki hamme hamesha window ke fix size ke undr travel kr nha hai . 
    for(int j = i+1 ; j < i + k ; j++){
        //compare kr rahe h hr maximum number ko 
        maxnum = max(maxnum,nums[j]);
    }
    ans.push_back(maxnum);
   }


    cout << "Maximums of each window: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;




    return 0 ;
}