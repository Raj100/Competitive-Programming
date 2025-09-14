from typing import List

def get_shortest_unique_substring(arr: List[str], str: str) -> str:
    # pass # your code goes here

    # mp_arr=['x':0, 'y':0,'z':0]
    # give= x y y z y z y x
    #                 00  0
    # str="xyy" -xy =
    # str= "y"+zy
    # Time:O(n*m) spaceO(n)
    m = len(arr)
    n= len(str)
    s = set(arr)
    os=s
    l,r=0,0
    ans=""
    if n==0 or m==0:
        return ans
    if n==1 and m==1:
        if arr[0]==str[0]:
            return str
    while(r<n):
        if(len(s)==0):
            s=os
            if len(ans)==0:
                ans= str[l:r]
            elif (r-l)<len(ans):
                ans= str[l:r]
            l=r
            # l=r
            # while (l=<r and ((str[l] not in os) ) ):
            #     l+=1
        if(str[r] in s):
            s.remove(str[r])
        elif str[r] in os:
            l=r
        r+=1
    return ans




    
    # n=8
    # m=3, i = 0->5 , x -> z
    # i=0, j=0 
    # 
    # ans=""
    # if m==0 or n==0:
    #     return ""

    # for i in range(n-m+1):
    #     j=0
    #     flag=1

    #     for j in range(m):
    #         if(str[i+j] in mp):
    #             mp[str[i+j]]-=1
    #             if mp[str[i+j]] ==-1:
    #                 mp=omp
    #                 flag=1
    #                 break  
    #         else:
    #             mp=omp
    #             flag=1
    #             break
    #     # for j in range(m):
    #     #     if(mp[j]!=0):
    #     #         flag=1
    #     #         break
    #     if j==m-1:
    #         ans=str[i:i+j+1]
    # return ans
        





