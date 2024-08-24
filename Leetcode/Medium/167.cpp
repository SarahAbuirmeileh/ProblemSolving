class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size()-1;
        while(left < right){
            if(numbers[left] + numbers[right] == target){
                return {left+1, right+1};
            }else if(numbers[left] + numbers[right] > target){
                right--;
            }else {
                left++;
            }
        }
        return {};
    }
};

function distinct(str,k){
    var L=0;
    var R=0;
    var dict={};
    var length=0;
    var maxlength=0
    while(R<str.length){
        if(str[R] in dict){
            dict[str[R]]++;
            length++;
        }
        else{
            dict[str[R]]=1;
            length++;
        }
        
        while(Object.keys(dict).length>k){
            dict[str[L]]--;
            if(dict[str[L]]==0){
                delete dict[str[L]];
            }
            length--;
            L++;
        }
        if(Object.keys(dict).length==k){
            if(length>maxlength){
                maxlength=length;
            }
        }
        R++;
    }
    return maxlength;
}