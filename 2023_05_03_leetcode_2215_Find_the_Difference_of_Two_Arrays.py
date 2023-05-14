def findDifference(nums1, nums2):
    nums1 = set(nums1)
    nums2 = set(nums2)
    l = list()
    l.append(nums1.difference(nums2))
    l.append(nums2.difference(nums1))
    return l

# def findDifference(nums1, nums2):
#     nums1 = set(nums1)
#     nums2 = set(nums2)
#     d = dict()
#     for i in nums1:
#         d[i] = 1 if i not in d else d[i] + 1
#     for i in nums2:
#         d[i] = 1 if i not in d else d[i] + 1
#     n1, n2 = [], []
#     for i in nums1:
#         if d[i] == 1:
#             n1.append(i)
#     for i in nums2:
#         if d[i] == 1:
#             n2.append(i)
#     l = []
#     l.append(n1)
#     l.append(n2)
#     return l


nums1 = input("Enter string of integers in first array: ")
nums2 = input("Enter string of integers in second array: ")
nums1 = list(map(int, nums1.split()))
nums2 = list(map(int, nums2.split()))
print("Difference of two arrays is ", findDifference(nums1, nums2))
