int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int minNum = 2147483647, maxNum =0;
    int i = 0, len = 0;
    
    for(i = 0; i < numsSize; i++){
        if (nums[i] < minNum){
            minNum = nums[i];  /* Find the smallest number in an array*/
        }
    }
    
    maxNum = target -minNum; /*Find the largest array element that may be adds for target*/
    len =  maxNum - minNum + 1; /*Calculate the length of the hash table*/
    int *hashTable = (int*)malloc(len * sizeof(int));
    int *result = (int*)malloc(2 * sizeof(int));
     for(i = 0; i < len; i++){
        hashTable[i] = -1;  /*Initialize hash table*/
    }
    for(i = 0; i < numsSize; i++){
        if (nums[i] <= maxNum){
            if(hashTable[target - nums[i] - minNum] != -1){
                result[0] = hashTable[target-nums[i] - minNum];
                result[1] = i;
                *returnSize = 2; 
                free(hashTable);
                return result;
            }
            hashTable[nums[i] - minNum] = i;
        }
        
    }
    *returnSize = 0; /*the number of valid elements that the return array*/
    free(hashTable);
    return result;
}

