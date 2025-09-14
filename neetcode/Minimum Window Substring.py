# find errors good learning
from typing import List
from collections import Counter
import math

class Solution:
    def minWindow(self, s: str, t: str) -> str:
        arr=t
        l,r = 0,0
        n= len(s)
        have= 0
        req= len(arr)
        req_mp= {}
        for e in arr:
            req_mp[e]= req_mp.get(e,0)+1
        curr_mp={}
        for e in req_mp:
            curr_mp[e]=0
        ans=math.inf
        index=[0]*2
        while(l<=r and r<n):
            if have ==req:
                print(l,r)
                if ans>(r-l):
                    index[0]=l
                    index[1]=r
                    ans= r-l
                if s[l] in req_mp:
                    curr_mp[s[l]]-=1
                    have=0
                    for e in req_mp:
                        if curr_mp[e]==req_mp[e]:
                            have+=1
                l+=1
            else:
                if s[r] in req_mp:
                    curr_mp[s[r]]+=1
                    have=0
                    for e in req_mp:
                        if curr_mp[e]==req_mp[e]:
                            have+=1
                r+=1
        if have ==req:
            print(l,r)
            if ans>(r-l):
                index[0]=l
                index[1]=r
                ans= r-l
            if s[l] in req_mp:
                curr_mp[s[l]]-=1
                have=0
                for e in req_mp:
                    if curr_mp[e]==req_mp[e]:
                        have+=1
            l+=1
            # print(have, " ",req)
        # print(index)
        return s[index[0]:index[1]+1]    
    












# sol
class Solution:
    def minWindow(self, s: str, t: str) -> str:
        arr=t
        l,r = 0,0
        n= len(s)
        have= 0
        req_mp= {}
        for e in arr:
            req_mp[e]= req_mp.get(e,0)+1
        req= len(req_mp)
        curr_mp={}
        for e in req_mp:
            curr_mp[e]=0
        ans=math.inf
        index=[0]*2
        while(have==req or (l<=r and r<n) ):
            if have ==req:
                if ans>(r-l):
                    index[0]=l
                    index[1]=r
                    ans= r-l
                if s[l] in req_mp:
                    curr_mp[s[l]]-=1
                    have=0
                    for e in req_mp:
                        if curr_mp[e]>=req_mp[e]:
                            have+=1
                l+=1
            else:
                if s[r] in req_mp:
                    curr_mp[s[r]]+=1
                    have=0
                    for e in req_mp:
                        if curr_mp[e]>=req_mp[e]:
                            have+=1
                r+=1
            have=0
            for e in req_mp:
                if curr_mp[e]>=req_mp[e]:
                    have+=1
        return s[index[0]:index[1]]   
    
# sol2