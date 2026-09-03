def solve():
    a = input().upper()
    mCnt = 0
    cnt = 1
    tru = False
    for i in range(1,len(a)):
        if a[i-1] == a[i]:
            tru = True
            if cnt >= mCnt:
                mCnt = cnt
            cnt = 0
        cnt+=1
    return mCnt if tru else cnt

print(solve())
    
