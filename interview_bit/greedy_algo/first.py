#problem-5
#meeting room
 
# class solution:
#     def solve(self,A):
#         data=[]
#         for s,e in A:
#             data.append((s,+1))
#             data.append((e,-1))
        
#         data.sort()
        
#         curr=0
#         ans=0
#         for _,v in data:
#             curr+=v
#             ans=max(ans,curr)
#         return ans
            
#Problem-6   
# candy distribution problem

# class Solution:
#     def solve(self,A):
#         n=len(A)
#         data=sorted((x,i) for i,x in enumerate(A))
        
#         candies=[1]*n
#         for _,i in data:
#             if i>0 and A[i]>A[i-1]:
#                 candies[i]=max(candies[i],candies[i-1]+1)
#             if i <n-1 and A[i]>A[i+1]:
#                 candies[i]=max(candies[i],candies[i+1]+1)
            
#         return sum(candies)


# problem-6
# seats

# class solution:
#     def seats(self,A):
#         MOD=10000003
#         crosses=[i for i,c in enumerate(A) if c== 'x']
#         crosses=[(cross - i) for i,cross in enumerate(crosses)]
#         n=len(crosses)
#         if n==0:return 0    
#         ans=float('inf')
#         for segment_start in range(len(A)):
#             total=0
#             for cross in crosses:
#                 total += abs(cross - segment_start)
#                 total %=MOD
#             ans = min(ans,total%MOD)

# problem-7
# assign rat to holes
# class solution:
#     def mice(self,A,B):
#         A.sorted()
#         B.sorted()
#         ans=0
#         for a,b in zip(A,B):
#             ans=max(ans,abs(a-b))
#         return ans

# problem-8
# majority element
# class solution:
#     def majorityElement(self,A):
#         n=len(A)
#         ans=0
#         for b in range(32):
#             ones=0
#             for num in A:
#                 if(1<<b) & num:
#                     ones+=1
#             if ones>n//2:
#                 ans +=(1<<b)
#         return ans


# problem-9
# gas problem
class Solution:
    def canCompleteCircuit(self,A,B):
        n=len(A)
        curr=start=0
        for i,(g,c) in enumerate(zip(A+A,B*2)):
            if i==start+n:
                return start
            
            curr=curr+g-c
            
            if curr <0:
                start=i+1
                curr=0
        return -1