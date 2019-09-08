class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash_map = dict()  # Constructing Hashtable with Dictionary
        for i , x in enumerate(nums):
            if target - x in hash_map:  # Find the correct result and return 
                return [hash_map[target -x], i]
            hash_map[x] = i  # Store in Hashtable if doesn’t find correct result
