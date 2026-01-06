#include <iostream>
#include "src/lib/Hashing/Hashing.h"


//Array intersection

std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        
    // your code goes here 
    std::unordered_map<int, int> maps; 
    std::vector<int> res;
    
    for(int x: nums1){
        maps[x]++;
    }
    for(int y: nums2){
        if(maps[y]){
            res.push_back(y);
            maps[y] = 0;
        }
    }
    
    std::sort(res.begin(), res.end());
    return res;
    
}

//

//kSumSubArray
int longestSubarrayKSum(std::vector<int> arr,int k){
    int n = arr.size();
	std::unordered_map<int,int> m;
	int pre = 0;

	int len = 0;

	for(int i=0;i<n;i++){
		pre += arr[i];

		if(pre==k){
			len = std::max(len,i+1);
		}

		if(m.find(pre-k)!=m.end()){
			len = std::max(len,i - m[pre-k]);
		}
		else{
			//store the first occ
			m[pre] = i;
		}

	}
	return len;

}


int main(int argc, char** argv){
    Hashing<int> greet;
    std::cout << greet.getHashingMessage() << std::endl;

    greet.insert("Mango", 10);
    greet.insert("Apple", 120);
    greet.insert("Banana", 30);
    greet.insert("Kamalakam", 20);
    greet.print();

    std::cout << "Price of Mango is "<< *greet.search("Mango") << std::endl;
    
    greet["newfruit"] = 100;
    greet.print();

    return EXIT_SUCCESS;

}
