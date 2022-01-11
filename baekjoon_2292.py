x=0;y=1
num = int(input()) # 입력입력 ㅎㅎ
while 1:
    for j in range(x):
        y+=1
    if num<=y: break
    x+=6
print(x//6+1)