# cook your dish here

try:

    for n in range(int(input())):
        p,s=map(int,input().split())
        if(p>=s):
            c=p-s+1
        else:
            c=0
        print('Case' , str(n+1) + ':', c*(c+1)//2)
except Exception:
    pass;
