class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size() ;

        for(int i = 0; i < size; i++){
            if(flowerbed[i] == 0 && n){
                if(i != 0 && i != size - 1){
                    if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                        n--;
                        flowerbed[i] = 1;
                    }
                }else if(i == 0 && ((size > 1 && flowerbed[1] == 0 ) || (size == 1)) ){
                        flowerbed[0] = 1;
                        n--;
                }else if(i == size - 1 && ((size > 1 && flowerbed[size - 2] == 0) || size == 1) ){
                    flowerbed[size - 1] = 1;
                    n--;
                }
            }
            if(n == 0 ){
                return true;
            }
        }
        return false;
    }
};