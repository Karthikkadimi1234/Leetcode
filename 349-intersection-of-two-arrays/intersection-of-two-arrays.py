class Solution(object):
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        c=[]
        for i in nums1:
            if i in nums2:
                c.append(i)
        c=set(c)
        c=list(c)
        return c