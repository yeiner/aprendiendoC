#include <iostream>
#include <vector>
using namespace std;

class Solution {
	public:
		vector<int> twoSum(vector<int>& nums, int target){
			return nums;
		};
	private:
		vector<int> resultado;
};


int main(){
	
	vector<int> v;
	v = {4, 7, 8, 9, 7};
	Solution sol;
	cout << "Sizeof : " << v.size() << endl;	
	for(int i =0; i < v.size(); i++){
		cout << v[i] << endl; 
	}
	
	return 0;

}
